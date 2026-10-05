//join @vipsourcecode for more free sources
#include "Main.h"
#include "Includes.h"
#include "Utility.h"
#include "Driver.h"
#include "DX11Window.h"
#include "DX11.h"
#include "Data.h"
#include "Esp.h"
#include "termcolor.hpp"
#include "Memory.h"
#include "Aimbot.h"
#include"loadDrv.h"
#include "imgui-docking/imgui.h"
#include "imgui-docking/imgui_impl_win32.h"
#include "imgui-docking/imgui_impl_dx11.h"
#include "imgui-docking/imgui_internal.h"

#include "ShObjIdl.h"
#include "xorstr.hpp"
#include "Discord.h"

Discord* g_Discord;


#define XTREME_DRIVER_FILE  "MEGA VIP.sys"
#define XTREME_SERVICE_NAME "MEGA VIP"
#define XTREME_DEVICE_NAME  "\\Device\\MEGA  VIP"
DRIVER* m_drv = nullptr;




inline bool existsDrv(const std::string& name) {
	struct stat buffer;
	return (stat(name.c_str(), &buffer) == 0);
}
bool WriteDataToFile(const UCHAR pBuffer[], const DWORD dwSize, const std::string& strFileName, const DWORD dwCreationDisposition = CREATE_NEW)
{
	const auto hFile = CreateFileA(strFileName.c_str(), GENERIC_READ | GENERIC_WRITE, 0, nullptr, dwCreationDisposition, FILE_ATTRIBUTE_NORMAL, nullptr);
	if (hFile == INVALID_HANDLE_VALUE) return false;
	DWORD dwNumberOfBytesWritten = NULL;
	const auto bWriteFile = WriteFile(hFile, pBuffer, dwSize, &dwNumberOfBytesWritten, nullptr);
	CloseHandle(hFile);
	return !(!bWriteFile || dwNumberOfBytesWritten != dwSize);
}

BOOL CALLBACK EnumWindowsProc(HWND hWnd, LPARAM lParam);
void CustomImGUIStyle()
{
	ImGuiIO& io = ImGui::GetIO();
	ImGuiStyle& style = ImGui::GetStyle();
	style.WindowPadding = ImVec2(4, 9);
	style.WindowRounding = 10.0f;
	style.FramePadding = ImVec2(0, 3);
	style.FrameRounding = 5.0f; // Make all elements (checkboxes, etc) circles
	style.ItemSpacing = ImVec2(8, 4);
	style.ItemInnerSpacing = ImVec2(1, 6);
	style.CellPadding = ImVec2(5, 5);
	style.IndentSpacing = 23.0f;
	style.ScrollbarSize = 11.0f;
	style.ScrollbarRounding = 9.0f;
	style.GrabMinSize = 15.0f; // Make grab a circle
	style.GrabRounding = 3.0f;
	style.PopupRounding = 2.f;
	style.Alpha = 1.0;
	style.WindowTitleAlign = ImVec2(0.5f, 0.5f);
	style.TouchExtraPadding = ImVec2(0, 0);
	style.TabRounding = 7.0f;

	style.ButtonTextAlign = ImVec2(0.50f, 0.50f);

	style.ChildBorderSize = 0.100f;

	style.DisplayWindowPadding = ImVec2(22, 22);
	style.DisplaySafeAreaPadding = ImVec2(4, 4);
	style.AntiAliasedLines = true;
	style.CurveTessellationTol = 1.f;
	style.TabBorderSize = 0.000f;
	ImVec4* colors = style.Colors;
	//style.Colors[ImGuiCol_WindowBg] = ImVec4(5.03399e-07, 4.41989e-07, 1e-06, 0.945304);
	style.Colors[ImGuiCol_WindowBg] = ImVec4(0.06f, 0.05f, 0.07f, 1.00f);//this change 
	// style.Colors[ImGuiCol_ChildBg] = ImVec4(5.03399e-07, 4.41989e-07, 1e-06, 0.84530);
	style.Colors[ImGuiCol_Border] = ImVec4(236, 236, 236, 200);
	style.Colors[ImGuiCol_BorderShadow] = ImVec4(236, 236, 236, 200);
	style.Colors[ImGuiCol_FrameBg] = ImVec4(0.265f, 0.265f, 0.265f, 1.000f);
	style.Colors[ImGuiCol_FrameBgHovered] = ImVec4(0.034f, 0.436f, 0.069f, 0.400f);
	style.Colors[ImGuiCol_FrameBgActive] = ImVec4(0.07f, 0.70f, 0.01f, 1.0f);


	colors[ImGuiCol_TitleBg] = ImVec4(0.188f, 0.018f, 0.018f, 1.000f);
	colors[ImGuiCol_TitleBgActive] = ImVec4(0.164f, 0.365f, 0.147f, 0.635f);


	style.Colors[ImGuiCol_CheckMark] = ImVec4(1.00f, 0.0f, 0.321f, 1.0f);
	style.Colors[ImGuiCol_MenuBarBg] = ImVec4(0.12f, 0.19f, 0.25f, 1.0f);
	style.Colors[ImGuiCol_SliderGrab] = ImVec4(0.08f, 0.09f, 0.08f, 1.0f);
	style.Colors[ImGuiCol_SliderGrabActive] = ImVec4(0.100f, 0.49f, 0.51f, 1.00f);
	style.Colors[ImGuiCol_Text] = ImVec4(255, 255, 0, 160);
	colors[ImGuiCol_ScrollbarBg] = ImVec4(0.606f, 1.000f, 0.000f, 0.000f);
	colors[ImGuiCol_ScrollbarGrab] = ImVec4(1.0f, 1.000f, 1.000f, 1.000f);
	colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(1.0f, 0.000f, 0.000f, 1.000f);
	colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.110f, 1.000f, 0.000f, 1.000f);
	style.Colors[ImGuiCol_Header] = ImVec4(0.500f, 0.64f, 0.196f, 1.00f);
	style.Colors[ImGuiCol_HeaderHovered] = ImVec4(0.03f, 0.70f, 0.01f, 1.0f);
	style.Colors[ImGuiCol_HeaderActive] = ImVec4(0.05f, 0.72f, 0.01f, 1.0f);
	style.Colors[ImGuiCol_TabHovered] = ImVec4(0.740f, 0.455f, 0.134f, 1.0f);
	colors[ImGuiCol_SliderGrabActive] = ImVec4(0.862f, 0.86f, 0.236f, 1.0f);

	colors[ImGuiCol_Button] = ImVec4(0.099f, 0.105f, 0.099f, 1.000f);
	colors[ImGuiCol_ButtonText] = ImVec4(0.000f, 0.874f, 1.000f, 1.000f);
	colors[ImGuiCol_ButtonHovered] = ImVec4(0.099f, 0.105f, 0.099f, 1.000f);
	colors[ImGuiCol_ButtonActive] = ImVec4(0.099f, 0.105f, 0.099f, 1.000f);
	colors[ImGuiCol_Header] = ImVec4(0.98f, 0.26f, 0.26f, 0.31f);
	colors[ImGuiCol_HeaderHovered] = ImVec4(0.98f, 0.26f, 0.26f, 0.80f);
	colors[ImGuiCol_HeaderActive] = ImVec4(0.98f, 0.26f, 0.26f, 1.00f);
	colors[ImGuiCol_SeparatorHovered] = ImVec4(0.75f, 0.10f, 0.10f, 0.78f);
	colors[ImGuiCol_SeparatorActive] = ImVec4(0.75f, 0.10f, 0.10f, 1.0f);
	colors[ImGuiCol_ResizeGrip] = ImVec4(0.98f, 0.26f, 0.26f, 0.25f);
	colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.98f, 0.26f, 0.26f, 0.67f);
	colors[ImGuiCol_ResizeGripActive] = ImVec4(0.98f, 0.26f, 0.26f, 0.95f);


	colors[ImGuiCol_Tab] = ImVec4(5.03399e-07, 4.41989e-07, 1e-06, 0.845304);
	colors[ImGuiCol_TabActive] = ImVec4(0.0f, 0.0f, 0.0f, 1.00f);
	colors[ImGuiCol_TabHovered] = ImVec4(0.0f, 0.0f, 0.0f, 1.00f);
	colors[ImGuiCol_TabUnfocused] = ImVec4(0.038f, 0.050f, 0.136f, 1.000f);

	colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.42f, 0.14f, 0.14f, 1.0f);
	colors[ImGuiCol_TextSelectedBg] = ImVec4(0.98f, 0.26f, 0.26f, 0.35f);
	colors[ImGuiCol_NavHighlight] = ImVec4(0.98f, 0.26f, 0.26f, 1.0f);
}

int main()
{
	system(XorStr("cls").c_str());
	//system("netsh advfirewall firewall add rule name=Dark dir=out action=block protocol=TCP remoteport=15692,20371,23946,27042,27043,5403,5646,7312,7311,2384,2383,3013,18081,8085,8086,13003,10012,8081,8088,13004,5006,501,25046,5045,8080,11042,11041,2979,2986,17000,13004,13003,35000,10013,10012,15692,20371  > NUL 2>&1 ");
	//system("netsh advfirewall firewall add rule name=Dark dir=in action=block protocol=UDP remoteport=15692,20371,23946,27042,27043,5403,5646,7312,7311,2384,2383,3013,18081,8085,8086,13003,10012,8081,8088,13004,5006,501,25046,5045,8080,11042,11041,2979,2986,17000,13004,13003,35000,10013,10012,15692,20371  > NUL 2>&1 ");

	g_Discord->Initialize();
	g_Discord->Update();
	int choice = 2;
	std::cout << termcolor::bright_yellow << "\n[>] Connecting To The MEGA Server ";   Sleep(200);  std::cout << termcolor::bright_green << "\n Successs ";
	Sleep(500);
	std::cout << termcolor::bright_yellow << "\n[>] Cheat Status: ";   Sleep(200);  std::cout << termcolor::bright_green << "\n Undetected ";
	Sleep(2000);
	Sleep(2000);

	m_drv = new DRIVER(XTREME_DRIVER_FILE, XTREME_DEVICE_NAME, XTREME_SERVICE_NAME, Driver, DriverSize);
	m_drv->Load();
	ShowWindow(GetConsoleWindow(), HIDE_WINDOW());


	TCHAR procid[256] = L"aow_exe.exe";
	TCHAR procidss[256] = L"AndroidProcess.exe";
	Game::Id = Utility::GetTrueProcessId(procidss);
	if (Game::Id > 0)
	{
		Emulator::IsSmartGaGa = TRUE;
	}
	else
	{
		Game::Id = Utility::GetTrueProcessId(procid);
		if (Game::Id > 0)
		{
			Emulator::IsGameLoop = TRUE;
		}
	}

	if (Game::Id == 0)
	{
		//	Driver::UnloadDriver(DriverName.c_str());
		MessageBox(NULL, L"Can't Find Game Process", L"MEGA  VIP", MB_OKCANCEL);
		system("pause >nul");
		ExitProcess(0);
	}

	Game::hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, Game::Id);

	if (Game::hProcess == 0)
	{
		//Driver::UnloadDriver(DriverName.c_str());
		cout << "Can't find game process, press any key to exit hack" << endl;
		system("pause >nul");
		ExitProcess(0);
	}

	if (Emulator::IsSmartGaGa == true)
	{
		EnumWindows(EnumWindowsProc, 0);
		if (IsIconic(Game::hWindow) != 0) ShowWindow(Game::hWindow, SW_RESTORE);
		Game::hWindow = FindWindowExW(Game::hWindow, 0, L"TitanRenderWindowClass", L"SmartGaGa RenderWindow");
		Game::hWindow = FindWindowEx(FindWindow(0, L"TitanRenderWindowClass"), NULL, L"TitanRenderWindowClass", L"SmartGaGa RenderWindow");

	}

	else if (Emulator::IsGameLoop == true)
	{
		EnumWindows(EnumWindowsProc, 0);
		if (IsIconic(Game::hWindow) != 0) ShowWindow(Game::hWindow, SW_RESTORE);
		Game::hWindow = FindWindowExW(Game::hWindow, 0, L"AEngineRenderWindowClass", L"AEngineRenderWindow");
	}

	if (Game::hWindow == 0)
	{
		//m_drv->Unload();
		MessageBox(NULL, L"Can't Find Game Window", L"By MEGA  VIP", MB_OKCANCEL);
		system("pause >nul");
		ExitProcess(0);
	}
	int scrWidthh = GetSystemMetrics(SM_CXSCREEN);
	int scrHeightt = GetSystemMetrics(SM_CYSCREEN);
	RECT Rect;
	GetWindowRect(Game::hWindow, &Rect);
	if (Rect.left < 0 || Rect.top < 0 || Rect.right < 0 || Rect.bottom < 0)
	{

		RECT tSize;
		GetWindowRect(Game::hWindow, &tSize);
		scrWidthh = tSize.right - tSize.left;
		scrHeightt = tSize.bottom - tSize.top;
		SetWindowPos(DX11Window::hWindow, HWND_TOPMOST, tSize.left, tSize.top, scrWidthh, scrHeightt, SWP_NOMOVE | SWP_NOSIZE);
	}

	if (Emulator::IsSmartGaGa == true)
	{
		Data::ViewMatrixBase = Data::GetViewMatrixBase(0x70000000, 0x90000000);

		if (Data::ViewMatrixBase == 0)
		{
			Data::ViewMatrixBase = Data::GetViewMatrixBase(0x90000000, 0xA0000000);
			Emulator::IsSmartGaGa4 = true;
		}
		else
		{
			Emulator::IsSmartGaGa7 = true;
		}
	}
	else if (Emulator::IsGameLoop == true)
	{
		Data::ViewMatrixBase = Data::GetViewMatrixBase(0x45000000, 0x60000000);

		if (Data::ViewMatrixBase == 0)
		{
			Data::ViewMatrixBase = Data::GetViewMatrixBase(0x25000000, 0x35000000);
			Emulator::IsGameLoop4 = true;
		}
		else
		{
			Emulator::IsGameLoop7 = true;
		}
	}

	if (Data::ViewMatrixBase == 0)
	{
		//	m_drv->Unload();
		MessageBox(NULL, L"Can't Find Game Base", L"MEGA  VIP", MB_OKCANCEL);
		ExitProcess(0);
	}
	//	driver


	cout << "PID: " << dec << uppercase << Game::Id << " | " << hex << Game::Id << endl;
	m_drv->Unload();
	FreeConsole();

	// Main font and render font path here
	string MainFontPath = XorStr("C:\\Windows\\Fonts\\arial.ttf");
	string RenderFontPath = XorStr("C:\\Windows\\Fonts\\arial.ttf");

	DX11Window::Instantiate(Rect.left, Rect.top, Rect.right - Rect.left, Rect.bottom - Rect.top);
	DX11::Instantiate(DX11Window::hWindow, DX11Window::Width, DX11Window::Height);
	ImGui::CreateContext();
	ImGuiIO& Io = ImGui::GetIO();
	CustomImGUIStyle();


	Io.WantSaveIniSettings = true;

	
	CustomImGUIStyle();

	static const ImWchar icons_ranges[] = { 0xf000, 0xf3ff, 0 };
	ImFontConfig icons_config;

	ImFontConfig CustomFont;
	CustomFont.FontDataOwnedByAtlas = false;


	icons_config.MergeMode = true;
	icons_config.PixelSnapH = true;
	icons_config.OversampleH = 2.5;
	icons_config.OversampleV = 2.5;




	//
	Io.IniFilename = nullptr;
	Esp::LoadConfig("‪C:\\MEGA  VIP_Key.lic"); //‪C:\khni_Key.ini
	Io.Fonts->AddFontFromFileTTF(MainFontPath.c_str(), 15.0f);


	Io.Fonts->AddFontFromMemoryCompressedTTF(font_awesome_data, font_awesome_size, 16.0f, &icons_config, icons_ranges);

	ImGui_ImplWin32_Init(DX11Window::hWindow);
	ImGui_ImplDX11_Init(DX11::pDevice, DX11::pImmediateContext);
	DX11::ImGui_DX11::special = Io.Fonts->AddFontFromFileTTF(RenderFontPath.c_str(), 15.0f);
	DX11::ImGui_DX11::pRegularFont = Io.Fonts->AddFontFromMemoryTTF(const_cast<std::uint8_t*>(Custom), sizeof(Custom), 13.f, &CustomFont);
	

	Thread::hQueryThread = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Data::QueryThread, 0, 0, 0);
	CloseHandle(Thread::hQueryThread);
	Thread::hEspThread = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Esp::EspThread, 0, 0, 0);
	CloseHandle(Thread::hEspThread);
	Thread::Target = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)DX11Window::SetWindowToTarget, 0, 0, 0);
	CloseHandle(Thread::Target);
	Thread::hAimbotThread = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Aimbot::AimbotThread, 0, 0, 0);
	CloseHandle(Thread::hAimbotThread);

	Thread::hMemoryThread = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Memory::MemoryThread, 0, 0, 0);
	CloseHandle(Thread::hMemoryThread);


	Thread::InstantThread = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Memory::Instant, 0, 0, 0);
	CloseHandle(Thread::InstantThread);



	MSG Message;
	while (true)
	{

		Sleep(10);

		if (PeekMessage(&Message, DX11Window::hWindow, 0, 0, PM_REMOVE))
		{
			TranslateMessage(&Message);
			DispatchMessage(&Message);
		}


		if (Setting::ShowMenu)
		{
			SetForegroundWindow(DX11Window::hWindow);
		}

		if (GetAsyncKeyState(VK_INSERT) & 1)
		{
			if (DX11Window::IsClickable == true)
			{
				Utility::ChangeClickability(FALSE, DX11Window::hWindow);
				DX11Window::IsClickable = !DX11Window::IsClickable;
				Setting::ShowMenu = !Setting::ShowMenu;
			}
			else
			{
				Utility::ChangeClickability(TRUE, DX11Window::hWindow);
				DX11Window::IsClickable = !DX11Window::IsClickable;
				Setting::ShowMenu = !Setting::ShowMenu;
			}
		}
		if (Setting::antiscreen)
		{
			SetWindowDisplayAffinity(DX11Window::hWindow, WDA_EXCLUDEFROMCAPTURE);
		}
		else
		{
			SetWindowDisplayAffinity(DX11Window::hWindow, WDA_NONE);

		}
		if (GetAsyncKeyState(VK_HOME) & 1)
		{
			Setting::ShowMenu2 = !Setting::ShowMenu2;
		}

		if (GetAsyncKeyState(VK_END) & 1)
		{
			if (Setting::MagicBullet)
			{
				Memory::RestoreHook();
			}

			if (Setting::instanthit)
			{
				Memory::RestoreHook();
			}

			Sleep(100);
			m_drv->Unload();
			ExitProcess(1);
		}

	}

	return EXIT_SUCCESS;
}
//join @vipsourcecode for more free sources
BOOL CALLBACK EnumWindowsProc(HWND hWnd, LPARAM lParam)
{
	char Buffer[1000];
	GetClassNameA(hWnd, Buffer, 1000);

	string WindowClassName = Buffer;
	if (Emulator::IsSmartGaGa == TRUE)
	{
		if (WindowClassName.find("TitanRenderWindowClass") != string::npos)
		{
			wchar_t Name[1000];
			GetWindowTextW(hWnd, Name, 1000);
			Game::hWindow = FindWindowW(L"TitanRenderWindowClass", Name);
		}
	}
	else if (Emulator::IsGameLoop == TRUE)
	{
		if (WindowClassName.find("TXGuiFoundation") != string::npos)
		{
			wchar_t Name[1000];
			GetWindowTextW(hWnd, Name, 1000);
			Game::hWindow = FindWindowW(L"TXGuiFoundation", Name);
		}
	}
	else if (Emulator::IsGameLoop7 == TRUE)
	{
		if (WindowClassName.find("TXGuiFoundation") != string::npos)
		{
			wchar_t Name[1000];
			GetWindowTextW(hWnd, Name, 1000);
			Game::hWindow = FindWindowW(L"TXGuiFoundation", Name);
			if (!Game::hWindow)
			{
				Game::hWindow = FindWindowEx(NULL, NULL, L"TXGuiFoundation", L"Gameloop【Turbo AOW Engine-7.1 Beta】");
			}

		}
	}
	return TRUE;
	//return 0;
}
//join @vipsourcecode for more free sources
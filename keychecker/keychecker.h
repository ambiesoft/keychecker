#pragma once

#include "../../profile/cpp/Profile/include/ambiesoft.profile.h"

#include "resource.h"

#define APP_NAME L"keychecker"

extern HINSTANCE ghInst;
extern WCHAR gszTitle[];
extern WCHAR gszWindowClass[];

ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);


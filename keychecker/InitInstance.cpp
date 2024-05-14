// keychecker.cpp : Defines the entry point for the application.
//

#include "framework.h"
#include "keychecker.h"

#include "helper.h"

using namespace Ambiesoft;

//   FUNCTION: InitInstance(HINSTANCE, int)
//
//   PURPOSE: Saves instance handle and creates main window
//
//   COMMENTS:
//
//        In this function, we save the instance handle in a global variable and
//        create and display the main program window.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
    ghInst = hInstance; // Store instance handle in our global variable

    // Load settings data
    try
    {
        Profile::ReadAll(GetIniPath(), true);
    }
    catch (file_not_found_error&) {}

    HWND hWnd = CreateWindowW(
        gszWindowClass,
        gszTitle,
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, 0, CW_USEDEFAULT, 0,
        nullptr,
        nullptr,
        hInstance,
        nullptr);

   if (!hWnd)
   {
      return FALSE;
   }

   LoadWindowLocation(hWnd, GetIniPath().c_str());

   ShowWindow(hWnd, nCmdShow);
   UpdateWindow(hWnd);

   return TRUE;
}


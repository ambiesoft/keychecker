#include "framework.h"
#include "keychecker.h"

using namespace Ambiesoft;
using namespace Ambiesoft::stdosd;

// Message handler for about box.
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        SetDlgItemText(hDlg,
            IDC_STATIC_APPVERSION,
            stdFormat(L"%s v%s", APP_NAME, GetVersionStringFromResource(nullptr, 3).c_str()).c_str());
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}

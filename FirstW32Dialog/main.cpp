#include <windows.h>
#include <commctrl.h>
#include <stdio.h>
#include "resource.h"

HINSTANCE hInst;

BOOL CALLBACK DlgMain(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch(uMsg)
    {
    case WM_INITDIALOG:
    {
        MessageBox(hwndDlg, "INIT Min tekst ...", "Titel", MB_OK); // 0=OK,1; 1=OK_ANNULLER; 3=AFBRYD/FORSØG/IGNORE
/*
MessageBox types;
#define MB_USERICON 128
#define MB_ICONASTERISK 64
#define MB_ICONEXCLAMATION 0x30
#define MB_ICONWARNING 0x30
#define MB_ICONERROR 16
#define MB_ICONHAND 16
#define MB_ICONQUESTION 32
#define MB_OK 0
#define MB_ABORTRETRYIGNORE 2
#define MB_APPLMODAL 0
#define MB_DEFAULT_DESKTOP_ONLY 0x20000
#define MB_HELP 0x4000
#define MB_RIGHT 0x80000
#define MB_RTLREADING 0x100000
#define MB_TOPMOST 0x40000
#define MB_DEFBUTTON1 0
#define MB_DEFBUTTON2 256
#define MB_DEFBUTTON3 512
#define MB_DEFBUTTON4 0x300
#define MB_ICONINFORMATION 64
#define MB_ICONSTOP 16
#define MB_OKCANCEL 1
#define MB_RETRYCANCEL 5
*/

    }
    return TRUE;

    case WM_CLOSE:
    {
        MessageBox(hwndDlg, "PRE_END Min tekst ...", "Titel", 0);
        EndDialog(hwndDlg, 0);
        MessageBox(hwndDlg, "POST_END Min tekst ...", "Titel", 0);
    }
    return TRUE;

    case WM_COMMAND:
    {
        switch(LOWORD(wParam))
        {
        MessageBox(hwndDlg, "COMMAND Min tekst ...", "Titel", 0);
        }
    }
    return TRUE;
    }
    return FALSE;
}


int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    hInst=hInstance;
    InitCommonControls();
    return DialogBox(hInst, MAKEINTRESOURCE(DLG_MAIN), NULL, (DLGPROC)DlgMain);
}

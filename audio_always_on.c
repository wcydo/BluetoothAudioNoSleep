#define _WIN32_WINNT 0x0500
#include <windows.h>

int main()
{
    HWND hWnd = GetConsoleWindow();
    ShowWindow(hWnd, SW_MINIMIZE);  // NOTE (): Won't hide the window without SW_MINIMIZE
    ShowWindow(hWnd, SW_HIDE);
    int time = 86400; // NOTE (): 24hrs

    for(int i = 0; i <= time; i++)
    {
        Sleep(7000);
        PlaySound("MouseClick", NULL, 0);
        i++;
    }
} 

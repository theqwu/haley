#include <windows.h>
#include <iostream>

#define SCREEN_WIDTH 1920
#define SCREEN_HEIGHT 1080

HICON icons[] = {
    LoadIcon(NULL, IDI_ERROR),
    LoadIcon(NULL, IDI_WARNING),
    LoadIcon(NULL, IDI_INFORMATION),
    LoadIcon(NULL, IDI_QUESTION),
};

size_t s_icons = sizeof(icons);

void IkonCiz()
{
    HWND hWnd = GetDesktopWindow();
    HDC hdc = GetWindowDC(hWnd);

    DrawIcon(hdc, rand() % SCREEN_WIDTH, rand() % SCREEN_HEIGHT, icons[rand() % s_icons]);

    ReleaseDC(hWnd, hdc);
}

int main()
{
    while (true)
    {
        IkonCiz();
        std::cout << "     ";
        std::cout << "Haley";
        std::cout << "      ";

        while (true)
        {
            std::cout << "     ";
            std::cout << "Haley";
        }
        while (true)
        {
            std::cout << "     ";
            std::cout << "Haley";
        }
        while (true)
        {
            std::cout << "     ";
            std::cout << "Haley";
        }
        while (true)
        {
            std::cout << "     ";
            std::cout << "Haley";
        }
        while (true)
        {
            std::cout << "     ";
            std::cout << "Haley";
        }
        while (true)
        {
            std::cout << "     ";
            std::cout << "Haley";
        }
        while (true)
        {
            std::cout << "     ";
            std::cout << "Haley";
        }
        while (true)
        {
            std::cout << "     ";
            std::cout << "Haley";
        }
        while (true)
        {
            std::cout << "     ";
            std::cout << "Haley";
        }
        while (true)
        {
            std::cout << "     ";
            std::cout << "Haley";
        }
        while (true)
        {
            std::cout << "     ";
            std::cout << "Haley";
        }
        while (true)
        {
            std::cout << "     ";
            std::cout << "Haley";
        }

        MessageBox(NULL, "yok edildin \n made by qwuelz", "Haley", MB_OK);
        MessageBox(NULL, "kurtulmak icin opucuk ver \n bruh", "Haley", MB_OK);

    }
    return 0;
}
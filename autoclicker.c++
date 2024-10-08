#include <windows.h>

void AutoClicker()
{
    POINT p; // Structure to store the cursor position

    while (true)
    {
        Sleep(50); // Sleep for 50 milliseconds

        // If left mouse button is pressed
        if ((GetKeyState(VK_LBUTTON) & 0x80) != 0)
        {
            if (GetCursorPos(&p)) // Get the cursor position
            {
                // Simulate mouse click
                mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
                mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
            }
        }

        // If right mouse button is pressed, break the loop
        if ((GetKeyState(VK_RBUTTON) & 0x80) != 0)
        {
            break;
        }
    }
}

int main()
{
    AutoClicker();
    return 0;
}

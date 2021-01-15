#include "twirled.h"


int main()
{
    bool state = false;
    int speed, n = 0, virkey, togglekey, thirdkey = 0, fourthkey = 0, fifthkey = 0, sixthkey = 0;
    char third, fourth, fifth, sixth;
    char title[256];
    HANDLE hConsole = GetHandle();\
    HANDLE thread_main;
    HKL Keyboard = GetKeyboardLayout(0);
    GetWindowTextA(search(), title, sizeof(title));
    string client = title;
    SetConsoleTitle("");
    system("MODE CON COLS=70 LINES=30");
    SetWindow();
    initial();
    thread_binds = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)&toggle, nullptr, 0, 0);
    thread_armor = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)&armor, nullptr, 0, 0);
    cout << endl;
    if (client != "")
    {
        SetConsoleTextAttribute(hConsole, 13);
        cout << endl << "       " << client; 
        SetConsoleTextAttribute(hConsole, 15);
        cout << " Found" << endl;
        Sleep(2000);
        menu();
        cout << "       \xC8\xAF ";
        SetConsoleTextAttribute(hConsole, 15);
        cout << "Activate Key: " ;
        virkey = toggle();
        SetConsoleTextAttribute(hConsole, 12);
        cout << "0x" <<  hex << virkey << endl;
        SetConsoleTextAttribute(hConsole, 4);
        cout << "       \xC8\xAF ";
        SetConsoleTextAttribute(hConsole, 15);
        cout << "Toggle Key: " ;
        togglekey = toggle();
        SetConsoleTextAttribute(hConsole, 12);
        cout << "0x" << hex << togglekey << endl;
        nigger:
        speed = 0;
        SetConsoleTextAttribute(hConsole, 4); 
        cout << "       \xC8\xAF ";
        SetConsoleTextAttribute(hConsole, 15);
        cout << "Blatant (1) | Normal (2) | Ghost (3) : ";
        SetConsoleTextAttribute(hConsole, 12);
        cin >> speed;
        SetConsoleTextAttribute(hConsole, 4); 
        if (speed < 0 || speed > 3){
            cout << "       \xC8\xAF ";
            SetConsoleTextAttribute(hConsole, 15);
            cout << "ERROR: Choose a number (1 to 3)" << endl;
            goto nigger;
        }
        SetConsoleTextAttribute(hConsole, 4); 
        cout << "       \xC8\xAF ";
        SetConsoleTextAttribute(hConsole, 15);
        cout << "Key for 3rd slot : ";
        SetConsoleTextAttribute(hConsole, 12);
        cin >> third;
        thirdkey = VkKeyScanEx(third, Keyboard);
        SetConsoleTextAttribute(hConsole, 4); 
        cout << "       \xC8\xAF ";
        SetConsoleTextAttribute(hConsole, 15);
        cout << "Key for 4th slot : ";
        SetConsoleTextAttribute(hConsole, 12);
        cin >> fourth;
        fourthkey = VkKeyScanEx(fourth, Keyboard);
        SetConsoleTextAttribute(hConsole, 4); 
        cout << "       \xC8\xAF ";
        SetConsoleTextAttribute(hConsole, 15);
        cout << "Key for 5th slot : ";
        SetConsoleTextAttribute(hConsole, 12);
        cin >> fifth;
        fifthkey = VkKeyScanEx(fifth, Keyboard);
        SetConsoleTextAttribute(hConsole, 4); 
        cout << "       \xC8\xAF ";
        SetConsoleTextAttribute(hConsole, 15);
        cout << "Key for 6th slot : ";
        SetConsoleTextAttribute(hConsole, 12);
        cin >> sixth;
        sixthkey = VkKeyScanEx(sixth, Keyboard);
        calc();
        keyplacement(thirdkey, fourthkey, fifthkey, sixthkey);
        SetConsoleTextAttribute(hConsole, 4); 
        cout << "       \xC8\xAF ";
        SetConsoleTextAttribute(hConsole, 15);
        cout << "Minecraft Resolution (AUTO) : ";
        SetConsoleTextAttribute(hConsole, 12);
        cout << dec << width << "x" << dec << height << endl;
        while(true){
            if(GetAsyncKeyState(togglekey)){
                state = true;
                this_thread::sleep_for(250ms);
            }
            while(state){
                if(GetAsyncKeyState(togglekey)){
                    state = false;
                    this_thread::sleep_for(250ms);
                }
                if(GetAsyncKeyState(virkey)){
                    armor(speed);
                }
                this_thread::sleep_for(1ms);
            }
            this_thread::sleep_for(1ms);
        }
    }
    else
    {
        SetConsoleTextAttribute(hConsole, 4);
        cout << "                      Nothing Found?" << endl;
        SetConsoleTextAttribute(hConsole, 12);
        cout << "             No instances of Minecraft Running" << endl << endl << "              ";
        SetConsoleTextAttribute(hConsole, 15);
        system("pause");
        exit(0);
    }
}
#include "twirled.h"

using namespace std;

INPUT Key;
HWND Find;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
HANDLE thread_binds;
HANDLE thread_armor;

int width, height;
int slotsX, slotsY1, slotsY2, slotsY3, slotsY4, invY1, invY2, invX1, invX2;
int thirdkey, fourthkey, fifthkey, sixthkey;

RECT rect;

HWND search()
{
    Find = FindWindowEx(0, 0, "LWJGL", 0);
    return Find;
}

HANDLE GetHandle()
{
    return hConsole;
}

void keyplacement(int key1, int key2, int key3, int key4){
    thirdkey = key1;
    fourthkey = key2;
    fifthkey = key3;
    sixthkey = key4;
}

void initial()
{
    SetConsoleTextAttribute(hConsole, 15);
    cout << endl
         << endl
         << "                   Locating";
    SetConsoleTextAttribute(hConsole, 2);
    cout << " Minecraft" << endl
         << endl;
    cout << "                   ";
    SetConsoleTextAttribute(hConsole, 15);
    for (int i = 0; i < 19; i++)
    {
        cout << "\xDF";
        Sleep(200);
    }
}

void SetWindow()
{
    CONSOLE_SCREEN_BUFFER_INFO info;
    GetConsoleScreenBufferInfo(hConsole, &info);
    COORD new_size =
        {
            info.srWindow.Right - info.srWindow.Left + 1,
            info.srWindow.Bottom - info.srWindow.Top + 1};
    SetConsoleScreenBufferSize(hConsole, new_size);
}

void menu()
{
    system("cls");
    SetConsoleTextAttribute(hConsole, 4);
    cout << endl << endl << "                xxviii";
    SetConsoleTextAttribute(hConsole, 15);
    cout <<" armor switch macro" << endl;
    cout << "                      -     v2     -      " << endl;
    SetConsoleTextAttribute(hConsole, 4);
    cout << "       \xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB " << endl;
    cout << "       \xBA                                        \xBA" << endl;
    cout << "       \xBA          ";
    SetConsoleTextAttribute(hConsole, 12);
    cout <<"https://t.me/twirled          "; 
    SetConsoleTextAttribute(hConsole, 4);
    cout << "\xBA" << endl;
    cout << "       \xBA          ";
    SetConsoleTextAttribute(hConsole, 12);
    cout << "https://t.me/twirl28          ";
    SetConsoleTextAttribute(hConsole, 4);
    cout << "\xBA" << endl;
    cout << "       \xBA          ";
    SetConsoleTextAttribute(hConsole, 12);
    cout << "https://twirled.net           ";
    SetConsoleTextAttribute(hConsole, 4);
    cout << "\xBA" << endl;
    cout << "       \xBA                                        \xBA" << endl;
    cout << "       \xBA  ";
    SetConsoleTextAttribute(hConsole, 15);
    cout << "If you actually paid for this, you're";
    SetConsoleTextAttribute(hConsole, 4);
    cout << " \xBA" << endl;
    cout << "       \xBA            ";
    SetConsoleTextAttribute(hConsole, 15);
    cout << "actually sped. LOL XD       ";
    SetConsoleTextAttribute(hConsole, 4);
    cout << "\xBA" << endl;
    cout << "       \xBA                                        \xBA" << endl;
    cout << "       \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC " << endl;
}

int toggle(){
    int key = 0, i;
    while(key == 0){
        for(i = 3; i < 256; i++) {
            if(GetAsyncKeyState(i)&SHRT_MAX){
                key = i;
                this_thread::sleep_for(50ms);
                break;
            }
        }
    }
    this_thread::sleep_for(50ms);
    getch();
    return key;
}

void calc(){
    ShowWindow(Find, SW_SHOWDEFAULT);
    SetForegroundWindow(Find);
    if(GetWindowRect(Find, &rect)){
        width = rect.right - rect.left;
        height = rect.bottom - rect.top;
    }
    slotsX = width * 0.3875;
    slotsY1 = height * 0.3148;
    slotsY2 = height * 0.3611;
    slotsY3 = height * 0.4167;
    slotsY4 = height * 0.4629;

    invX1 = width * 0.3875;
    invX2 = width * 0.4156;
    invY1 = height * 0.5277;
    invY2 = height * 0.5740;
}

void armor(int speed){
    switch(speed){
        case 1:
            invent();
            this_thread::sleep_for(30ms);
            move1();
            this_thread::sleep_for(8ms);
            move2();
            this_thread::sleep_for(8ms);
            move3();
            this_thread::sleep_for(8ms);
            move4();
            this_thread::sleep_for(8ms);
            move5();
            this_thread::sleep_for(8ms);
            move6();
            this_thread::sleep_for(8ms);
            move7();
            this_thread::sleep_for(8ms);
            move8();
            this_thread::sleep_for(8ms);
            move1();
            this_thread::sleep_for(8ms);
            move2();
            this_thread::sleep_for(8ms);
            move3();
            this_thread::sleep_for(8ms);
            move4();
            this_thread::sleep_for(8ms);
            invent();
            this_thread::sleep_for(8ms);
            break;
        case 2:
            invent();
            this_thread::sleep_for(80ms);
            move1();
            this_thread::sleep_for(40ms);
            move2();
            this_thread::sleep_for(40ms);
            move3();
            this_thread::sleep_for(40ms);
            move4();
            this_thread::sleep_for(40ms);
            move5();
            this_thread::sleep_for(40ms);
            move6();
            this_thread::sleep_for(40ms);
            move7();
            this_thread::sleep_for(40ms);
            move8();
            this_thread::sleep_for(40ms);
            move1();
            this_thread::sleep_for(40ms);
            move2();
            this_thread::sleep_for(40ms);
            move3();
            this_thread::sleep_for(40ms);
            move4();
            this_thread::sleep_for(40ms);
            invent();
            this_thread::sleep_for(40ms);
            break;
        case 3:
            invent();
            this_thread::sleep_for(80ms);
            move1();
            this_thread::sleep_for(80ms);
            move2();
            this_thread::sleep_for(80ms);
            move3();
            this_thread::sleep_for(80ms);
            move4();
            this_thread::sleep_for(80ms);
            move5();
            this_thread::sleep_for(80ms);
            move6();
            this_thread::sleep_for(80ms);
            move7();
            this_thread::sleep_for(80ms);
            move8();
            this_thread::sleep_for(80ms);
            move1();
            this_thread::sleep_for(80ms);
            move2();
            this_thread::sleep_for(80ms);
            move3();
            this_thread::sleep_for(80ms);
            move4();
            this_thread::sleep_for(80ms);
            invent();
            this_thread::sleep_for(80ms);
            break;   
    }
}

void invent(){
    Key.type = INPUT_KEYBOARD;
    Key.ki.wScan = 0;
    Key.ki.time = 0;
    Key.ki.dwExtraInfo = 0;
    Key.ki.wVk = 0x45;
    Key.ki.dwFlags = 0;
    SendInput(1, &Key, sizeof(Key));
    this_thread::sleep_for(10ms);
    Key.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &Key, sizeof(Key));
    this_thread::sleep_for(25ms);
    ZeroMemory(&Key, sizeof(Key));
}

void move1(){
    SetCursorPos(invX1, invY1);
    Key.type = INPUT_KEYBOARD;
    Key.ki.wScan = 0;
    Key.ki.time = 0;
    Key.ki.dwExtraInfo = 0;
    Key.ki.wVk = thirdkey;
    Key.ki.dwFlags = 0;
    this_thread::sleep_for(25ms);
    SendInput(1, &Key, sizeof(Key));
    this_thread::sleep_for(10ms);
    Key.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &Key, sizeof(Key));
    this_thread::sleep_for(25ms);
    ZeroMemory(&Key, sizeof(Key));

}

void move2(){
    SetCursorPos(invX2, invY1);
    Key.type = INPUT_KEYBOARD;
    Key.ki.wScan = 0;
    Key.ki.time = 0;
    Key.ki.dwExtraInfo = 0;
    Key.ki.wVk = fourthkey;
    Key.ki.dwFlags = 0;
    this_thread::sleep_for(25ms);
    SendInput(1, &Key, sizeof(Key));
    this_thread::sleep_for(10ms);
    Key.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &Key, sizeof(Key));
    this_thread::sleep_for(25ms);
    ZeroMemory(&Key, sizeof(Key));
}

void move3(){
    SetCursorPos(invX2, invY2);
    Key.type = INPUT_KEYBOARD;
    Key.ki.wScan = 0;
    Key.ki.time = 0;
    Key.ki.dwExtraInfo = 0;
    Key.ki.wVk = fifthkey;
    Key.ki.dwFlags = 0;
    this_thread::sleep_for(25ms);
    SendInput(1, &Key, sizeof(Key));
    this_thread::sleep_for(10ms);
    Key.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &Key, sizeof(Key));
    this_thread::sleep_for(25ms);
    ZeroMemory(&Key, sizeof(Key));
}

void move4(){
    SetCursorPos(invX1, invY2);
    Key.type = INPUT_KEYBOARD;
    Key.ki.wScan = 0;
    Key.ki.time = 0;
    Key.ki.dwExtraInfo = 0;
    Key.ki.wVk = sixthkey;
    Key.ki.dwFlags = 0;
    this_thread::sleep_for(25ms);
    SendInput(1, &Key, sizeof(Key));
    this_thread::sleep_for(10ms);
    Key.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &Key, sizeof(Key));
    this_thread::sleep_for(25ms);
    ZeroMemory(&Key, sizeof(Key));
}

void move5(){
    SetCursorPos(slotsX, slotsY1);
    Key.type = INPUT_KEYBOARD;
    Key.ki.wScan = 0;
    Key.ki.time = 0;
    Key.ki.dwExtraInfo = 0;
    Key.ki.wVk = thirdkey;
    Key.ki.dwFlags = 0;
    this_thread::sleep_for(25ms);
    SendInput(1, &Key, sizeof(Key));
    this_thread::sleep_for(10ms);
    Key.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &Key, sizeof(Key));
    this_thread::sleep_for(25ms);
    ZeroMemory(&Key, sizeof(Key));
}

void move6(){
    SetCursorPos(slotsX, slotsY2);
    Key.type = INPUT_KEYBOARD;
    Key.ki.wScan = 0;
    Key.ki.time = 0;
    Key.ki.dwExtraInfo = 0;
    Key.ki.wVk = fourthkey;
    Key.ki.dwFlags = 0;
    this_thread::sleep_for(25ms);
    SendInput(1, &Key, sizeof(Key));
    this_thread::sleep_for(10ms);
    Key.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &Key, sizeof(Key));
    this_thread::sleep_for(25ms);
    ZeroMemory(&Key, sizeof(Key));
}

void move7(){
    SetCursorPos(slotsX, slotsY3);
    Key.type = INPUT_KEYBOARD;
    Key.ki.wScan = 0;
    Key.ki.time = 0;
    Key.ki.dwExtraInfo = 0;
    Key.ki.wVk = fifthkey;
    Key.ki.dwFlags = 0;
    this_thread::sleep_for(25ms);
    SendInput(1, &Key, sizeof(Key));
    this_thread::sleep_for(10ms);
    Key.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &Key, sizeof(Key));
    this_thread::sleep_for(25ms);
    ZeroMemory(&Key, sizeof(Key));
}

void move8(){
    SetCursorPos(slotsX, slotsY4);
    Key.type = INPUT_KEYBOARD;
    Key.ki.wScan = 0;
    Key.ki.time = 0;
    Key.ki.dwExtraInfo = 0;
    Key.ki.wVk = sixthkey;
    Key.ki.dwFlags = 0;
    this_thread::sleep_for(25ms);
    SendInput(1, &Key, sizeof(Key));
    this_thread::sleep_for(10ms);
    Key.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &Key, sizeof(Key));
    this_thread::sleep_for(25ms);
    ZeroMemory(&Key, sizeof(Key));
}
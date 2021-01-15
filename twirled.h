#include <string>
#include <windows.h>
#include <iostream>
#include <conio.h>
#include <thread>
#include <chrono>

using namespace std;

extern HANDLE thread_binds;
extern HANDLE thread_armor;
extern int width, height;

HWND search();
void keyplacement(int key1, int key2, int key3, int key4);
void initial();
void armor(int speed);
void SetWindow();
void menu();
int toggle();
HANDLE GetHandle();
void calc();
void invent();
void move1();
void move2();
void move3();
void move4();
void move5();
void move6();
void move7();
void move8();
string bind(int k);
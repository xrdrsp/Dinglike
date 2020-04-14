#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <windows.h>
using namespace std;
int main() {
    int x_coordinate, y_coordinate;
    int num;
    printf("Input your x-coordinate: ");
    cin >> x_coordinate;
    printf("Input your y-coordinate: ");
    cin >> y_coordinate;
    printf("Set the number of likes (No more than 100000 recommended): ");
    cin >> num;
    system("pause");
    Sleep(2000);
    SetCursorPos(x_coordinate, y_coordinate);
    for (int i = 0; i < num; i++) {
        mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
    }
    return 0;
}
// Copyright by xrdrsp (https://github.com/xrdrsp/) and Dovuq (https://github.com/dovuq/).

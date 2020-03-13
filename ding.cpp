#include <cstdlib>
#include <windows.h>
using namespace std;
int main() {
    system("pause");
    SetCursorPos(1330, 840);
    for (int i = 10000; ~i; i--) {
        mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
    }
    return 0;
}

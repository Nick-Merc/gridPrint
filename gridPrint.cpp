#include <iostream>
#include "Common.h"

using namespace std;

void PrintGrid(char userChar);

int main() {
    char userChar;

    GetUserChar(userChar);
    PrintGrid(userChar);

    return 0;
}

void PrintGrid(char userChar) {
    for (int i = 0; i < 5; ++i) {
        for (int q = 0; q < 5; ++q) {
            cout << userChar;
        }
        cout << endl;
    }
}

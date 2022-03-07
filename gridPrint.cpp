#include <iostream>

using namespace std;

void GetUserChar(char& userChar);
void PrintGrid(char userChar);

int main() {
    char userChar;

    GetUserChar(userChar);
    PrintGrid(userChar);

    return 0;
}

void GetUserChar(char& userChar) {
    cout << "What letter would you like to print in a grid? ";
    cin >> userChar;
    cout << endl;
}

void PrintGrid(char userChar) {
    for (int i = 0; i < 5; ++i) {
        for (int q = 0; q < 5; ++q) {
            cout << userChar;
        }
        cout << endl;
    }
}

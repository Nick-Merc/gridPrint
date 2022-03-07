#include <iostream>

void PrintGrid(char userChar) {
    for (int i = 0; i < 5; ++i) {
        for (int q = 0; q < 5; ++q) {
            std::cout << userChar;
            std::cout << " ";
        }
        std::cout << std::endl;
    }
}

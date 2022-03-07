#include <iostream>

char GetUserChar() {
    char userChar;

    std::cout << "What letter would you like to print in a grid? ";
    std::cin >> userChar;
    std::cout << std::endl;

    return userChar;
}

#include <iostream>

// Функция для округления вниз до ближайшего числа, кратного D
unsigned int round_down(unsigned int x, unsigned int D) {
    return x - (x % D);
}

// Функция для округления вверх до ближайшего числа, кратного D
unsigned int round_up(unsigned int x, unsigned int D) {
    if (x % D == 0) {
        return x;
    } else {
        return x + (D - x % D);
    }
}

int main() {
    // Значение x
    unsigned int x = 100;
    // Кратное значение D
    unsigned int D = 32;

    // Округление вниз
    unsigned int rounded_down = round_down(x, D);
    std::cout << "Округление вниз до ближайшего числа, кратного " << D << ": " << rounded_down << std::endl;

    // Округление вверх
    unsigned int rounded_up = round_up(x, D);
    std::cout << "Округление вверх до ближайшего числа, кратного " << D << ": " << rounded_up << std::endl;

    return 0;
}

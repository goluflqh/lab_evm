#include <iostream>
#include <cstdint>
#include <cstdio> // Для использования функции printf()

constexpr int N = 5;

int main() {
    unsigned int Ml[N] = {0xADE1A1DA, 0xADE1A1DA, 0xADE1A1DA, 0xADE1A1DA, 0xADE1A1DA};

    // Вывод адреса начала массива
    std::printf("Address of the beginning of array Ml: %p\n", (void*)Ml);

    // Вывод адреса начального (нулевого) элемента массива
    std::printf("Address of the first element of array Ml: %p\n", (void*)&(Ml[0]));

    // Вывод адреса следующего (с индексом 1) элемента массива
    std::printf("Address of the second element of array Ml: %p\n", (void*)&(Ml[1]));

    // Размер элемента массива Ml
    std::cout << "Size of each element in array Ml: " << sizeof(Ml[0]) << " bytes" << std::endl;

    return 0;
}

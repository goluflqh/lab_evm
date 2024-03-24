#include <iostream>
#include <cstdint>
#include <cstdio> // Для использования функции scanf()
#include <iomanip> // Для управления выводом формата чисел

constexpr int N = 5;

// Макрос для вывода массива в двух формах
#define PRINT_ARRAY(arr, size, format) \
do { \
    std::cout << #arr << ": "; \
    for (int i = 0; i < size; ++i) \
        std::cout << std::setw(4) << std::right << std::setfill('0') << std::hex << format << " "; \
    std::cout << std::endl; \
} while(0)

int main() {
    uint8_t Mb[N] = {0xED, 0xED, 0xED, 0xED, 0xED};

    // Вывод массива Mb до ввода новых значений
    PRINT_ARRAY(Mb, N, static_cast<int>(Mb[i]));

    // Ввод нового значения элемента Mb[i]
    int input;
    std::cout << "Введите новое значение для элемента Mb[" << N/2 << "]: ";
    if (std::scanf("%x", &input) != 1) {
        std::cout << "Ошибка ввода! Некорректное значение." << std::endl;
        std::exit(EXIT_FAILURE);
    }
    Mb[N/2] = static_cast<uint8_t>(input);

    // Вывод массива Mb после ввода новых значений
    PRINT_ARRAY(Mb, N, static_cast<int>(Mb[i]));

    return 0;
}

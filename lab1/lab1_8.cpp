#include <iostream>
#include <cstdint>
#include <cstdio> // Для использования функции scanf()

constexpr int N = 5;

int main() {
    unsigned int Ml[N] = {0xADE1A1DA, 0xADE1A1DA, 0xADE1A1DA, 0xADE1A1DA, 0xADE1A1DA};

    // Вывод массива Ml до ввода новых значений
    std::cout << "Ml before input:" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cout << "Ml[" << i << "]: " << Ml[i] << std::endl;
    }

    // Ввод новых значений всех элементов массива Ml
    std::cout << "Enter new values for all elements of Ml: ";
    int num_inputs = std::scanf("%x %x %x %x %x", &Ml[0], &Ml[1], &Ml[2], &Ml[3], &Ml[4]);

    // Проверка корректности ввода
    if (num_inputs != N) {
        std::cout << "Error: Incorrect number of inputs. Entered " << num_inputs << " values, expected " << N << std::endl;
    }

    // Вывод массива Ml после ввода новых значений
    std::cout << "Ml after input:" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cout << "Ml[" << i << "]: " << Ml[i] << std::endl;
    }

    return 0;
}

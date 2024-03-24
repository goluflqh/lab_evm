#include <iostream>
#include <cstdint>

int main() {
    // Заданные значения
    int32_t m = 201;
    int32_t n = -59;
    float a = 0;
    float b = 1;
    float c = 12345689;
    float d = 123456891;
    int32_t values[] = {0, static_cast<int32_t>(UINT32_MAX), INT32_MIN, INT32_MAX};
    const char* value_names[] = {"0", "UINT32_MAX", "INT32_MIN", "INT32_MAX"};

    // Функция для целочисленного инкремента
    auto increment = [](int32_t& x) {
        reinterpret_cast<char*>(&x)[0]++; // Инкрементируем младший байт
    };

    // Печать исходных значений
    std::cout << "Исходные значения:\n";
    std::cout << "m: " << m << std::endl;
    std::cout << "n: " << n << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;
    for (int i = 0; i < 4; ++i) {
        std::cout << "value[" << value_names[i] << "]: " << values[i] << std::endl;
    }

    // Выполнение инкремента и печать результатов
    std::cout << "\nРезультаты инкремента:\n";
    increment(m);
    increment(n);
    increment(*reinterpret_cast<int32_t*>(&a));
    increment(*reinterpret_cast<int32_t*>(&b));
    increment(*reinterpret_cast<int32_t*>(&c));
    increment(*reinterpret_cast<int32_t*>(&d));
    for (int i = 0; i < 4; ++i) {
        increment(values[i]);
    }
    std::cout << "m: " << m << std::endl;
    std::cout << "n: " << n << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;
    for (int i = 0; i < 4; ++i) {
        std::cout << "value[" << value_names[i] << "]: " << values[i] << std::endl;
    }

    return 0;
}

#include <iostream>
#include <cstdint>

// Функция для рассчета модуля значения с плавающей запятой x
float absolute(float x) {
    // Преобразование значения x в целочисленное представление
    std::uint32_t* float_as_int = reinterpret_cast<std::uint32_t*>(&x);

    // Сброс бита знака в целочисленном представлении
    *float_as_int &= 0x7FFFFFFF; // Устанавливаем биты знака в 0

    // Преобразование целочисленного представления обратно в значение с плавающей запятой
    float result = *reinterpret_cast<float*>(float_as_int);

    return result;
}

int main() {
    float x = -10.5f;

    std::cout << "Модуль |x| для x = " << x << " : " << absolute(x) << std::endl;

    return 0;
}

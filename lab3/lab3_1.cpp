#include <iostream>
#include <bitset>

// Функция для печати 16-битного числа
void print16(short num) {
    std::bitset<16> bits(num);
    std::cout << "16 бит: " << bits << " (" << num << ")" << std::endl;
}

// Функция для печати 32-битного числа
void print32(int num) {
    std::bitset<32> bits(num);
    std::cout << "32 бит: " << bits << " (" << num << ")" << std::endl;
}

int main() {
    // Значения переменных из варианта
    short m = 201;
    short n = -59;

    // Расширение знаковых чисел до 32 бит
    int extended_signed_m = static_cast<int>(m);
    int extended_signed_n = static_cast<int>(n);

    // Печать значений 16 бит до расширения
    std::cout << "Значение переменной m до расширения знаковых:" << std::endl;
    print16(m);
    std::cout << "Значение переменной n до расширения знаковых:" << std::endl;
    print16(n);

    // Печать значений 32 бит после расширения
    std::cout << "Значение переменной m после расширения знаковых:" << std::endl;
    print32(extended_signed_m);
    std::cout << "Значение переменной n после расширения знаковых:" << std::endl;
    print32(extended_signed_n);

    // Расширение беззнаковых чисел до 32 бит
    unsigned short unsigned_m = reinterpret_cast<unsigned short&>(m);
    unsigned short unsigned_n = reinterpret_cast<unsigned short&>(n);

    // Печать значений 16 бит до расширения
    std::cout << "Значение переменной m до расширения беззнаковых:" << std::endl;
    print16(unsigned_m);
    std::cout << "Значение переменной n до расширения беззнаковых:" << std::endl;
    print16(unsigned_n);

    // Печать значений 32 бит после расширения
    std::cout << "Значение переменной m после расширения беззнаковых:" << std::endl;
    print32(unsigned_m);
    std::cout << "Значение переменной n после расширения беззнаковых :" << std::endl;
    print32(unsigned_n);

    return 0;
}

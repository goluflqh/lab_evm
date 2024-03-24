#include <iostream>
#include <bitset>

// Функция для печати 16-битного числа
void print16(short num) {
    std::bitset<16> bits(num);
    std::cout << "16 бит: " << bits << " (" << num << ")" << std::endl;
}

int main() {
    // Исходные значения переменных m и n
    short m = 201;
    short n = -59;

    // Знаковое умножение на 2
    short signed_mult_m = m * 2;
    short signed_mult_n = n * 2;

    // Беззнаковое умножение на 2
    short unsigned_mult_m = static_cast<unsigned short>(m) * 2;
    short unsigned_mult_n = static_cast<unsigned short>(n) * 2;

    // Знаковое деление на 2
    short signed_div_m = m / 2;
    short signed_div_n = n / 2;

    // Беззнаковое деление на 2
    short unsigned_div_m = static_cast<unsigned short>(m) / 2;
    short unsigned_div_n = static_cast<unsigned short>(n) / 2;

    // Остаток от беззнакового деления на 16
    short remainder_m = static_cast<unsigned short>(m) % 16;
    short remainder_n = static_cast<unsigned short>(n) % 16;

    // Округление вниз до числа, кратного 16 (беззнаковое)
    short floor_m = (m / 16) * 16;
    short floor_n = (n / 16) * 16;

    // Знаковый сдвиг влево на 1 бит
    short signed_shift_left_m = m << 1;
    short signed_shift_left_n = n << 1;

    // Беззнаковый сдвиг влево на 1 бит
    short unsigned_shift_left_m = static_cast<unsigned short>(m) << 1;
    short unsigned_shift_left_n = static_cast<unsigned short>(n) << 1;

    // Знаковый сдвиг вправо на 1 бит
    short signed_shift_right_m = m >> 1;
    short signed_shift_right_n = n >> 1;

    // Беззнаковый сдвиг вправо на 1 бит
    short unsigned_shift_right_m = static_cast<unsigned short>(m) >> 1;
    short unsigned_shift_right_n = static_cast<unsigned short>(n) >> 1;

    // Рассчитывает x & 15
    short and_15_m = m & 15;
    short and_15_n = n & 15;

    // Рассчитывает x & -16
    short and_neg_16_m = m & -16;
    short and_neg_16_n = n & -16;

    // Печать результатов
    std::cout << "Исходное значение m:" << std::endl;
    print16(m);
    std::cout << "Исходное значение n:" << std::endl;
    print16(n);

    std::cout << "Знаковое умножение на 2 для m:" << std::endl;
    print16(signed_mult_m);
    std::cout << "Знаковое умножение на 2 для n:" << std::endl;
    print16(signed_mult_n);

    std::cout << "Беззнаковое умножение на 2 для m:" << std::endl;
    print16(unsigned_mult_m);
    std::cout << "Беззнаковое умножение на 2 для n:" << std::endl;
    print16(unsigned_mult_n);

    std::cout << "Знаковое деление на 2 для m:" << std::endl;
    print16(signed_div_m);
    std::cout << "Знаковое деление на 2 для n:" << std::endl;
    print16(signed_div_n);

    std::cout << "Беззнаковое деление на 2 для m:" << std::endl;
    print16(unsigned_div_m);
    std::cout << "Беззнаковое деление на 2 для n:" << std::endl;
    print16(unsigned_div_n);

    std::cout << "Остаток от беззнакового деления на 16 для m:" << std::endl;
    print16(remainder_m);
    std::cout << "Остаток от беззнакового деления на 16 для n:" << std::endl;
    print16(remainder_n);

    std::cout << "Округление вниз до числа, кратного 16 (беззнаковое) для m:" << std::endl;
    print16(floor_m);
    std::cout << "Округление вниз до числа, кратного 16 (беззнаковое) для n:" << std::
endl;
print16(floor_n);
std::cout << "Знаковый сдвиг влево на 1 бит для m:" << std::endl;
print16(signed_shift_left_m);
std::cout << "Знаковый сдвиг влево на 1 бит для n:" << std::endl;
print16(signed_shift_left_n);

std::cout << "Беззнаковый сдвиг влево на 1 бит для m:" << std::endl;
print16(unsigned_shift_left_m);
std::cout << "Беззнаковый сдвиг влево на 1 бит для n:" << std::endl;
print16(unsigned_shift_left_n);

std::cout << "Знаковый сдвиг вправо на 1 бит для m:" << std::endl;
print16(signed_shift_right_m);
std::cout << "Знаковый сдвиг вправо на 1 бит для n:" << std::endl;
print16(signed_shift_right_n);

std::cout << "Беззнаковый сдвиг вправо на 1 бит для m:" << std::endl;
print16(unsigned_shift_right_m);
std::cout << "Беззнаковый сдвиг вправо на 1 бит для n:" << std::endl;
print16(unsigned_shift_right_n);

std::cout << "Результат x & 15 для m:" << std::endl;
print16(and_15_m);
std::cout << "Результат x & 15 для n:" << std::endl;
print16(and_15_n);

std::cout << "Результат x & -16 для m:" << std::endl;
print16(and_neg_16_m);
std::cout << "Результат x & -16 для n:" << std::endl;
print16(and_neg_16_n);

return 0;
}
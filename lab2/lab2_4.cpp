#include <iostream>
#include <bitset>
#include <iomanip>

void print16(void* p) {
    // Печать беззнакового 16-битного числа в шестнадцатеричном представлении
    std::cout << "Unsigned 16-bit integer (hex):   ";
    std::cout << std::hex << std::setw(4) << std::setfill('0') << *(reinterpret_cast<unsigned short*>(p)) << std::endl;

    // Печать беззнакового 16-битного числа в двоичном представлении
    std::cout << "Unsigned 16-bit integer (binary): ";
    std::bitset<16> bits_unsigned(*(reinterpret_cast<unsigned short*>(p)));
    std::cout << bits_unsigned << std::endl;

    // Печать беззнакового 16-битного числа в десятичном представлении
    std::cout << "Unsigned 16-bit integer (decimal): " << std::dec << std::setw(5) << *(reinterpret_cast<unsigned short*>(p)) << std::endl;

    // Печать знакового 16-битного числа в шестнадцатеричном представлении
    std::cout << "Signed 16-bit integer (hex):     ";
    std::cout << std::hex << std::setw(4) << std::setfill('0') << *(reinterpret_cast<short*>(p)) << std::endl;

    // Печать знакового 16-битного числа в двоичном представлении
    std::cout << "Signed 16-bit integer (binary):   ";
    std::bitset<16> bits_signed(*(reinterpret_cast<short*>(p)));
    std::cout << bits_signed << std::endl;

    // Печать знакового 16-битного числа в десятичном представлении
    std::cout << "Signed 16-bit integer (decimal): " << std::dec << std::setw(6) << *(reinterpret_cast<short*>(p)) << std::endl;
}

int main() {
    unsigned short min_unsigned = 0;
    unsigned short max_unsigned = 65535;
    short min_signed = -32768;
    short max_signed = 32767;
    unsigned short x = 5;
    short y = -5;
    unsigned short z = 0xFF007100;

    std::cout << "min_unsigned:" << std::endl;
    print16(&min_unsigned);

    std::cout << "max_unsigned:" << std::endl;
    print16(&max_unsigned);

    std::cout << "min_signed:" << std::endl;
    print16(&min_signed);

    std::cout << "max_signed:" << std::endl;
    print16(&max_signed);

    std::cout << "x:" << std::endl;
    print16(&x);

    std::cout << "y:" << std::endl;
    print16(&y);

    std::cout << "z:" << std::endl;
    print16(&z);

    return 0;
}

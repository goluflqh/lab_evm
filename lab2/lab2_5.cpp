#include <iostream>
#include <iomanip>
#include <bitset>
#include <cmath> // Для работы с плавающей запятой

void print32(void *p) {
    unsigned int *p_uint32 = reinterpret_cast<unsigned int*>(p);
    int *p_int32 = reinterpret_cast<int*>(p);
    float *p_float = reinterpret_cast<float*>(p);

    std::cout << "Data: " << std::endl;
    std::cout << "Unsigned int: " << std::hex << std::setw(8) << std::setfill('0') << *p_uint32 << " "
              << std::bitset<32>(*p_uint32) << " "
              << std::dec << std::setw(10) << *p_uint32 << std::endl;

    std::cout << "Signed int: " << std::hex << std::setw(8) << std::setfill('0') << *p_int32 << " "
              << std::bitset<32>(*p_int32) << " "
              << std::dec << std::setw(11) << *p_int32 << std::endl;

    std::cout << "Float (fixed): " << std::fixed << std::setprecision(8) << *p_float << std::endl;

    std::cout << "Float (scientific): " << std::scientific << std::setprecision(8) << *p_float << std::defaultfloat << std::endl;
}

int main() {
    unsigned int min_uint32 = 0;
    unsigned int max_uint32 = 0xFFFFFFFF;
    int min_int32 = 0x80000000;
    int max_int32 = 0x7FFFFFFF;
    int x = 5;
    int y = -5;
    unsigned int z = 0xFF007100;

    float float_x = static_cast<float>(x);
    float float_y = static_cast<float>(y);
    float float_z = static_cast<float>(z);

    std::cout << "Data minimum unsigned 32-bit integer value: ";
    print32(&min_uint32);

    std::cout << "Data maximum unsigned 32-bit integer value: ";
    print32(&max_uint32);

    std::cout << "Data minimum signed 32-bit integer value: ";
    print32(&min_int32);

    std::cout << "Data maximum signed 32-bit integer value: ";
    print32(&max_int32);

    std::cout << "Data integer value of x corresponding to option: ";
    print32(&x);

    std::cout << "Data integer value of y corresponding to option: ";
    print32(&y);

    std::cout << "Data integer value of z corresponding to option: ";
    print32(&z);

    std::cout << "Float data integer value of x corresponding to option: ";
    print32(&float_x);

    std::cout << "Float data integer value of y corresponding to option: ";
    print32(&float_y);

    std::cout << "Float data integer value of z corresponding to option: ";
    print32(&float_z);

    std::cout << "Comparison of float values:" << std::endl;
    std::cout << "Float x: " << float_x << std::endl;
    std::cout << "Float y: " << float_y << std::endl;
    std::cout << "Float y = -x: " << -float_x << std::endl;

    return 0;
}

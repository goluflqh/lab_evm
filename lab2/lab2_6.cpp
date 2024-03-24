#include <iostream>
#include <iomanip>
#include <bitset>
#include <cstdint>

void print64(void *p) {
    uint64_t *p_uint64 = reinterpret_cast<uint64_t*>(p);
    int64_t *p_int64 = reinterpret_cast<int64_t*>(p);
    double *p_double = reinterpret_cast<double*>(p);

    std::cout << "Data: " << std::endl;
    std::cout << "Unsigned int: " << std::hex << std::setw(16) << std::setfill('0') << *p_uint64 << " "
              << std::bitset<64>(*p_uint64) << " "
              << std::dec << std::setw(20) << *p_uint64 << std::endl;

    std::cout << "Signed int: " << std::hex << std::setw(16) << std::setfill('0') << *p_int64 << " "
              << std::bitset<64>(*p_int64) << " "
              << std::dec << std::setw(20) << *p_int64 << std::endl;

    std::cout << "Double (fixed): " << std::fixed << std::setprecision(10) << *p_double << std::endl;

    std::cout << "Double (scientific): " << std::scientific << std::setprecision(16) << *p_double << std::defaultfloat << std::endl;
}

int main() {
    unsigned int min_uint64 = 0;
    unsigned int max_uint64 = 0xFFFFFFFF;
    int min_int64 = 0x80000000;
    int max_int64 = 0x7FFFFFFF;
    int x = 5;
    int y = -5;
    unsigned int z = 0xFF007100;

    float float_x = static_cast<float>(x);
    float float_y = static_cast<float>(y);
    float float_z = static_cast<float>(z);

    double double_x = static_cast<double>(x);
    double double_y = static_cast<double>(y);
    double double_z = static_cast<double>(z);

    std::cout << "Data minimum unsigned 64-bit integer value: " << std::endl;
    print64(&min_uint64);
    std::cout << "Data maximum unsigned 64-bit integer value:" << std::endl;
    print64(&max_uint64);
    std::cout << "Data minimum signed 64-bit integer value:" << std::endl;
    print64(&min_int64);
    std::cout << "Data maximum signed 64-bit integer value:" << std::endl;
    print64(&max_int64);
    std::cout << "Data integer value of x corresponding to option:" << std::endl;
    print64(&x);
    std::cout << "Data integer value of y corresponding to option:" << std::endl;
    print64(&y);
    std::cout << "Data integer value of z corresponding to option:" << std::endl;
    print64(&z);
    std::cout << "Float data integer value of x corresponding to option:" << std::endl;
    print64(&float_x);
    std::cout << "Float data integer value of y corresponding to option:" << std::endl;
    print64(&float_y);
    std::cout << "Float data integer value of z corresponding to option:" << std::endl;
    print64(&float_z);
    std::cout << "Double data integer value of x corresponding to option:" << std::endl;
    print64(&double_x);
    std::cout << "Double data integer value of y corresponding to option:" << std::endl;
    print64(&double_y);
    std::cout << "Double data integer value of z corresponding to option:" << std::endl;
    print64(&double_z);

    return 0;
}



#include <iostream>
#include <iomanip> // Для использования манипуляторов вывода

void printPointer(void* p) {
    // Преобразование в типизированные указатели
    char* p1 = reinterpret_cast<char*>(p);
    unsigned short* p2 = reinterpret_cast<unsigned short*>(p);
    double* p3 = reinterpret_cast<double*>(p);

    // Вывод значений по адресам
    std::cout << "Value at p1: 0x" << std::hex << static_cast<int>(*p1) << std::endl;
    std::cout << "Value at p2: 0x" << std::hex << *p2 << std::endl;
    std::cout << "Value at p3: " << *p3 << std::endl;

    // Вывод значений по смежным адресам
    std::cout << "Value at p1 + 1: 0x" << std::hex << static_cast<int>(*(p1 + 1)) << std::endl;
    std::cout << "Value at p2 + 1: 0x" << std::hex << *(p2 + 1) << std::endl;
    std::cout << "Value at p3 + 1: " << *(p3 + 1) << std::endl;
}

int main() {
    long long value1 = 0x1122334455667788LL;
    char value2[] = "0123456789abcdef";

    std::cout << "Printing value 0x1122334455667788LL:" << std::endl;
    printPointer(&value1);

    std::cout << std::endl << "Printing string \"0123456789abcdef\":" << std::endl;
    printPointer(value2);

    return 0;
}

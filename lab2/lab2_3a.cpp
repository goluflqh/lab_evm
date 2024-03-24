#include <iostream>
#include <iomanip> // Для использования манипуляторов вывода

void printDump(void* p, size_t N) {
    unsigned char* p1 = reinterpret_cast<unsigned char*>(p); // Преобразование в типизированный указатель на байт

    for (size_t i = 0; i < N; ++i) {
        std::cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(*p1) << " "; // Вывод шестнадцатеричного значения байта
        ++p1; // Переход к следующему байту
    }
    std::cout << std::endl;
}

int main() {
    // Пример использования функции
    unsigned long long value1 = 0x1122334455667788LL;
    char value2[] = "0123456789abcdef";

    std::cout << "Dump of long long value 0x1122334455667788:" << std::endl;
    printDump(&value1, sizeof(value1));

    std::cout << "Dump of string \"0123456789abcdef\":" << std::endl;
    printDump(value2, sizeof(value2) - 1); // Исключаем завершающий нуль-символ

    return 0;
}

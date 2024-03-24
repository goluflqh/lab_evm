#include <iostream>
template<typename T>

void viewPointer(void* p) {
    // Преобразование в типизированные указатели
    T* typedPtr = reinterpret_cast<T*>(p);
    char* p1 = reinterpret_cast<char*>(p);
    unsigned short* p2 = reinterpret_cast<unsigned short*>(p);
    double* p3 = reinterpret_cast<double*>(p);

    // Вывод адресов указателей
    std::cout << "Address of p: " << p << std::endl;
    std::cout << "Address of p1: " << static_cast<void*>(p1) << std::endl;
    std::cout << "Address of p2: " << static_cast<void*>(p2) << std::endl;
    std::cout << "Address of p3: " << static_cast<void*>(p3) << std::endl;

    // Вывод адресов смежных элементов
    std::cout << "Address of p1 + 1: " << static_cast<void*>(p1 + 1) << std::endl;
    std::cout << "Address of p2 + 1: " << static_cast<void*>(p2 + 1) << std::endl;
    std::cout << "Address of p3 + 1: " << static_cast<void*>(p3 + 1) << std::endl;

    // Вывод разницы между адресами
    std::cout  << "Difference between p1 and p1 + 1 in bytes: " << reinterpret_cast<char*>(p1+1) - reinterpret_cast<char*>(p1) << std:: endl;
    std::cout  << "Difference between p2 and p2 + 1 in bytes: " << reinterpret_cast<unsigned short*>(p2+1) - reinterpret_cast<unsigned short*>(p2) <<std:: endl;
    std::cout << "Difference between p3 and p3 + 1 in bytes: " << reinterpret_cast<double*>(p3+1) - reinterpret_cast<double*>(p3) << std::endl;
    std::cout << "Difference between p and p + 1 in bytes: " << reinterpret_cast<int*>(p+1) - reinterpret_cast<int*>(p) << std::endl;
}

int main() {
    int x = 12;
    viewPointer<int>(&x); // Пример вызова функции для указателя на int

    return 0;
}

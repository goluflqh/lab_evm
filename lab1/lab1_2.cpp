#include <iostream>

#define SIZE_OF_TYPE(type) std::cout << "Size of " #type << " : " << sizeof(type) << " bytes" << std::endl;

int main() {
    SIZE_OF_TYPE(char);
    SIZE_OF_TYPE(signed char);
    SIZE_OF_TYPE(unsigned char);
    SIZE_OF_TYPE(char*);
    SIZE_OF_TYPE(bool);
    SIZE_OF_TYPE(wchar_t);
    SIZE_OF_TYPE(short);
    SIZE_OF_TYPE(int);
    SIZE_OF_TYPE(long);
    SIZE_OF_TYPE(long long);
    SIZE_OF_TYPE(float);
    SIZE_OF_TYPE(double);
    SIZE_OF_TYPE(long double);
    SIZE_OF_TYPE(size_t);
    SIZE_OF_TYPE(ptrdiff_t);
    SIZE_OF_TYPE(void*);

    return 0;
}

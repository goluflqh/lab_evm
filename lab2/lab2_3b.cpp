#include <iostream>
#include <iomanip>

void printDump(void* p, size_t N) {
    unsigned char* p1 = reinterpret_cast<unsigned char*>(p);

    for (size_t i = 0; i < N; ++i) {
        std::cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(*p1) << " ";
        ++p1;
    }
    std::cout << std::endl;
}

int main() {
    int x = 0x12345678;
    unsigned int arr[3] = {0x12345678, 0x90abcdef, 0xabcdef12};
    double y = 3.141592653589793;

    std::cout << "Integer x:" << std::endl;
    printDump(&x, sizeof(x));

    std::cout << "Array of integers:" << std::endl;
    printDump(&arr, sizeof(arr));

    std::cout << "Double y:" << std::endl;
    printDump(&y, sizeof(y));

    return 0;
}

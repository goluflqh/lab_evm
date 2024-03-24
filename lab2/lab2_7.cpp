#include <iostream>

// Function to print memory dump
void printDump(void* ptr, size_t size) {
    unsigned char* p = reinterpret_cast<unsigned char*>(ptr);
    for (size_t i = 0; i < size; ++i) {
        std::cout << std::hex << static_cast<int>(p[i]) << " ";
    }
}

int main() {
    // Strings in different encodings
    const char* utf8Str = "jzyx";
    const char* utf8Str2 = "ёяюэ";
    const wchar_t* utf16Str = L"jzyx";
    const wchar_t* utf16Str2 = L"ёяюэ";

    // Print memory dump for UTF-8 strings
    std::cout << "Memory dump for UTF-8 string \"jzyx\": ";
    printDump((void*)utf8Str, sizeof(utf8Str));
    std::cout << std::endl;

    std::cout << "Memory dump for UTF-8 string \"ёяюэ\": ";
    printDump((void*)utf8Str2, sizeof(utf8Str2));
    std::cout << std::endl;

    // Print memory dump for UTF-16 strings
    std::cout << "Memory dump for UTF-16 string L\"jzyx\": ";
    printDump((void*)utf16Str, sizeof(utf16Str));
    std::cout << std::endl;

    std::cout << "Memory dump for UTF-16 string L\"ёяюэ\": ";
    printDump((void*)utf16Str2, sizeof(utf16Str2));
    std::cout << std::endl;

    return 0;
}

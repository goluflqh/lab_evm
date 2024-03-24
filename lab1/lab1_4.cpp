#include <iostream>
#include <cstdio>
#include <cinttypes>
#include <cstdint>
using namespace std;
#define PRINT_ARRAY(arr, size, type) \
    cout << "Array of " #type << ":" << endl; \
    for(int i=0; i<size; i++) { \
        cout << arr[i] << " "; \
    } \
    cout << endl;
int main()
{
    setlocale(LC_ALL, "Russian");
    const int N = 5;

    int Ms[] = {0xFADE, 0xFADE, 0xFADE, 0xFADE, 0xFADE};
    unsigned int Ml[] = {0xADE1A1DA, 0xADE1A1DA, 0xADE1A1DA, 0xADE1A1DA, 0xADE1A1DA};
    int64_t Mq[] = {0xC1A551F1AB1E, 0xC1A551F1AB1E, 0xC1A551F1AB1E, 0xC1A551F1AB1E, 0xC1A551F1AB1E};
    float Mfs[] = {-8.0/5, -8.0/5, -8.0/5, -8.0/5, -8.0/5};
    double Mfl[] = {-8.0/5, -8.0/5, -8.0/5, -8.0/5, -8.0/5};

    PRINT_ARRAY(Ms, N, int);
    PRINT_ARRAY(Ml, N, unsigned int);
    PRINT_ARRAY(Mq, N, int64_t);
    PRINT_ARRAY(Mfs, N, float);
    PRINT_ARRAY(Mfl, N, double);

    return 0;
}

#include <iostream>
#include <cstdint>
#include <cstdio> // Для использования функции scanf и printf
#include <cstdlib> // Для использования функции exit
 using namespace std;
constexpr int N = 5;

// Макрос для вывода массива в обеих формах
#define PRINT_ARRAY(arr, size, type) \
    cout << "Array of " #type << ":" << endl; \
    for(int i=0; i<size; i++) { \
        cout << arr[i] << " "; \
    } \
    cout << endl;

int main() {
    // Массивы
    int Ms[N] = {0xFADE, 0xFADE, 0xFADE, 0xFADE, 0xFADE};
    unsigned int  Ml[N] = {0xADE1A1DA, 0xADE1A1DA, 0xADE1A1DA, 0xADE1A1DA, 0xADE1A1DA};
    int64_t Mq[N] = {0xC1A551F1AB1E, 0xC1A551F1AB1E, 0xC1A551F1AB1E, 0xC1A551F1AB1E, 0xC1A551F1AB1E};
    float Mfs[N] = {-8.0f/5, -8.0f/5, -8.0f/5, -8.0f/5, -8.0f/5};
    double Mfl[N] = {-8.0/5, -8.0/5, -8.0/5, -8.0/5, -8.0/5};

    // Вывод массивов до ввода
    PRINT_ARRAY(Ms, N, int);
    PRINT_ARRAY(Ml, N, unsigned int );
    PRINT_ARRAY(Mq, N, int64_t);
    PRINT_ARRAY(Mfs, N, float);
    PRINT_ARRAY(Mfl, N, double);

    // Ввод нового значения для элемента M[i]
    int new_value;
    printf("Enter a new value for M[i]: ");
    int result = scanf("%d", &new_value);

    // Проверка корректности ввода
    if (result != 1) {
        puts("Error: Incorrect input.");
        exit(EXIT_FAILURE);
    }

    // Присваиваем новое значение элементу массива
    Ml[2] = new_value;

    // Вывод массивов после ввода
    PRINT_ARRAY(Ms, N, int);
    PRINT_ARRAY(Ml, N, unsigned int );
    PRINT_ARRAY(Mq, N, int64_t);
    PRINT_ARRAY(Mfs, N, float);
    PRINT_ARRAY(Mfl, N, double);

    return 0;
}

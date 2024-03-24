#include <iostream>
#include <iomanip>
#include <bitset>

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

// Функция для вычисления частичной суммы гармонического ряда в "наивном" порядке
double naive_harmonic_sum(int N) {
    double sum = 0.0;
    for (int i = 1; i <= N; ++i) {
        sum += 1.0 / i;
    }
    return sum;
}

// Функция для вычисления частичной суммы гармонического ряда в обратном порядке
double reverse_harmonic_sum(int N) {
    double sum = 0.0;
    for (int i = N; i >= 1; --i) {
        sum += 1.0 / i;
    }
    return sum;
}

int main() {
    // Значения N для проверки
    int N_values[] = {1000, 1000000, 1000000000};

    for (int i = 0; i < 3; ++i) {
        int N = N_values[i];

        // Вычисление частичной суммы в "наивном" порядке
        double naive_sum = naive_harmonic_sum(N);

        // Вычисление частичной суммы в обратном порядке
        double reverse_sum = reverse_harmonic_sum(N);

        // Вывод результатов
        std::cout << "N = " << N << std::endl;
        std::cout << "Naive harmonic sum:" << std::endl;
        print64(&naive_sum);
        std::cout << "Reverse harmonic sum:" << std::endl;
        print64(&reverse_sum);
        std::cout << std::endl;
    }

    return 0;
}

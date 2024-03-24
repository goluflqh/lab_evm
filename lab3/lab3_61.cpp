#include <iostream>

// Функция для вычисления частичной суммы гармонического ряда в "наивном" порядке
float naive_harmonic_sum(int N) {
    float sum = 0.0f;
    for (int i = 1; i <= N; ++i) {
        sum += 1.0f / i;
    }
    return sum;
}

// Функция для вычисления частичной суммы гармонического ряда в обратном порядке
float reverse_harmonic_sum(int N) {
    float sum = 0.0f;
    for (int i = N; i >= 1; --i) {
        sum += 1.0f / i;
    }
    return sum;
}

int main() {
    // Значения N для проверки
    int N_values[] = {1000, 1000000, 1000000000};

    for (int i = 0; i < 3; ++i) {
        int N = N_values[i];

        // Вычисление частичной суммы в "наивном" порядке
        float naive_sum = naive_harmonic_sum(N);

        // Вычисление частичной суммы в обратном порядке
        float reverse_sum = reverse_harmonic_sum(N);

        // Вывод результатов
        std::cout << "N = " << N << std::endl;
        std::cout << "Naive harmonic sum: " << naive_sum << std::endl;
        std::cout << "Reverse harmonic sum: " << reverse_sum << std::endl;
        std::cout << std::endl;
    }

    return 0;
}

#include <iostream>
#include <cstdint>

bool isPerfect(std::uint64_t number) {
    if (number < 2)
        return false;

    std::uint64_t sum = 1; // 1 sempre divide

    for (std::uint64_t i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            sum += i;

            std::uint64_t pair = number / i;
            if (pair != i) // evita duplicar raiz quadrada
                sum += pair;
        }
    }

    return sum == number;
}

int main() {
    for (std::uint64_t i = 2; i <= 100000; ++i) {
        if (isPerfect(i))
            std::cout << i << " is a perfect number\n";
    }

    return 0;
}

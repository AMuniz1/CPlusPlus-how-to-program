#include <iostream>
#include <cstdint>

struct GCDResult {
    std::uint64_t value;
    std::uint64_t iterations;
};

bool isPrime(std::uint64_t number) {
    if (number < 2) return false;

    for (std::uint64_t j = 2; j * j <= number; ++j) {
        if (number % j == 0)
            return false;
    }
    return true;
}

GCDResult gcd_euclid(std::uint64_t a, std::uint64_t b) {
    std::uint64_t iterations = 0;

    while (b != 0) {
        std::uint64_t temp = b;
        b = a % b;
        a = temp;
        ++iterations;
    }

    return {a, iterations};
}

GCDResult gcd_subtraction(std::uint64_t a, std::uint64_t b) {
    if (a == 0) return {b, 0};
    if (b == 0) return {a, 0};

    std::uint64_t iterations = 0;

    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;

        ++iterations;
    }

    return {a, iterations};
}

int main() {
    std::uint64_t n{}, a{};

    std::cout << "Enter two numbers: ";
    std::cin >> n >> a;

    auto result1 = gcd_euclid(n, a);
    auto result2 = gcd_subtraction(n, a);

    std::cout << "\nGCD (Euclid): " << result1.value
              << "\nIterations: " << result1.iterations << "\n";

    std::cout << "\nGCD (Subtraction): " << result2.value
              << "\nIterations: " << result2.iterations << "\n";

    if (isPrime(n))
        std::cout << n << " is prime.\n";

    if (isPrime(a))
        std::cout << a << " is prime.\n";

    return 0;
}

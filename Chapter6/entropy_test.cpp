#include <iostream>
#include <random>

int main() {
    std::random_device rd;

    std::cout << "entropy() reportada: " << rd.entropy() << "\n\n";

    std::cout << "Alguns valores gerados por random_device:\n";
    for (int i = 0; i < 10; ++i) {
        std::cout << rd() << "\n";
    }

    return 0;
}

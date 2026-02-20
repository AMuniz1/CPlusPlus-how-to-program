#include <iostream>
#include <random>
#include <cstdint>

bool playRound(std::mt19937& rng) {
    std::uniform_int_distribution<std::uint32_t> dist(1, 1000);

    const std::uint32_t number = dist(rng);
    std::uint32_t guesses = 0;

    while (true) {
        std::cout << "Enter a guess between 1 and 1000: ";

        std::uint32_t guess{};
        if (!(std::cin >> guess)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input.\n";
            continue;
        }

        ++guesses;

        if (guess == number) {
            if (guesses < 10)
                std::cout << "You rock at this game!\n";
            else if (guesses < 20)
                std::cout << "You win!\n";
            else
                std::cout << "You win, but that took a while.\n";

            return true;
        }

        std::cout << (guess < number ? "Too low!\n" : "Too high!\n");
    }
}

int main() {
    std::random_device rd;
    std::mt19937 rng(rd());

    while (true) {
        playRound(rng);

        std::cout << "Play again? (y/n): ";
        char play{};
        std::cin >> play;

        if (play != 'y' && play != 'Y')
            break;
    }

    return 0;
}

#include <iostream>
#include <iomanip>
#include <random>

int main(int argc, char **argv){

  unsigned int seed{0};

  std::cout << "Entre com a semente(seed): ";
  std::cin >> seed;

  std::default_random_engine engine{seed};
  std::uniform_int_distribution randomDie{1,6};

  //loop 10 vezes

  for(unsigned int jogada{1}; jogada <=10; ++jogada){
    std::cout << std::setw(10) << randomDie;

    if (jogada%5 == 0){
      std::cout  << '\n';
    }
  }


  return 0;
}

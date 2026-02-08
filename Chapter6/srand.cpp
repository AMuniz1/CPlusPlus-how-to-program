#include <iostream>
#include <iomanip>
#include <cstdlib>

int main(int argc, char **argv){
  
  unsigned int seed{0};
  
  std::cout << "Entre com a semente(seed): ";
  std::cin >> seed;
  
  srand(seed);
  
  //loop 10 vezes
  
  for(unsigned int jogada{1}; jogada <=10; ++jogada){
    std::cout << std::setw(10) <<   (1+rand()%6);
    
    if (jogada%5 == 0){
      std::cout  << std::endl;
    }  
  }
  
  
  return 0;
}

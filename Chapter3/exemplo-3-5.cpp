#include <iostream>
#include "Conta2.h"

int main(int argc, char **argv){
  Conta conta1{"Ivan Vieira"};
  Conta conta2{"Dayse Lúcide"};
  
  std::cout<< "O nome da primeira conta é " 
          << conta1.pegaNome() << std::endl;
  std::cout<< "O nome da segunda conta é " 
          << conta2.pegaNome() << std::endl;
  return 0;
}

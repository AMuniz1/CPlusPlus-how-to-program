#include <iostream>
#include <iomanip>
#include <string>
#include "JurosCompostos.h"

int main(int argc, char **argv){
  
  int taxa;
  int divisor;
  
  std::cout << " Entre com a taxa de juros inteira e o divisor. Por exemplo \n"
          << "para     2%, entre:    2 100\n"
          << "para   2.3%, entre:   23 1000\n"
          << "para  2.37%, entre:  237 10000\n"
          << "para 2.375%, entre: 2375 100000\n";
  
  std::cin >> taxa >> divisor;
  
  // Inicializando o saldo com R$ 1000,00
  RealCapital saldo{1000, 0}; // 1000 reais e 0 centavos
  
  std::cout << "\nSaldo inicial: "<< saldo.paraString() << std::endl;
  std::cout << "\nAno" << std::setw(20) << "Dinheiro na conta" << std::endl;
  
  for(unsigned int ano{1}; ano <= 10; ano++){
    saldo.adicionarJuros(taxa, divisor);
    
    std::cout << std::setw(4) << ano << std::setw(20) << saldo.paraString() << std::endl;
  }  
}

#include <iostream>
#include "Conta3.h"

int main(int argc, char **argv){
  Conta conta1{"Ivan Vieira", 2000};
  Conta conta2{"Dayse Lúcide", 5000};
  int qtdDeposito;
  int qtdSaque;
  funçãoMostrar(conta1);
  funçãoMostrar(conta2);
  
  std::cout << "\n\nEntre o total depositado na conta 1: ";
  
  std::cin >> qtdDeposito;
  
  funçãoDepositar(conta1, qtdDeposito);
  conta1.depósito(qtdDeposito);
  
  funçãoMostrar(conta1);
    
  std::cout << "\n\nEntre o total depositado na conta 2: ";
  std::cin >> qtdDeposito;
  funçãoDepositar(conta2, qtdDeposito);
  conta2.depósito(qtdDeposito);
  funçãoMostrar(conta2);
  
  std::cout << "\nPor favor, quanto que o(a) sr.(a) " << conta1.pegaNome() 
            << " quer sacar?" << std::endl;
  std::cin >> qtdSaque;
  conta1.saque(qtdSaque);
  funçãoMostrar(conta1);
  
  std::cout << "\nPor favor, quanto que o(a) sr.(a) " << conta2.pegaNome() 
            << " quer sacar?" << std::endl;
  std::cin >> qtdSaque;
  conta2.saque(qtdSaque);
  funçãoMostrar(conta2);
  
  std::cout << "Processo finalizado. Encerrando programa..." << std::endl;
}

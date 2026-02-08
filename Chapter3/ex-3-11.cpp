#include <iostream>
#include <string>
#include "Employee.h"

int main(int argc, char **argv){
  
  Employee empregado1("Dayse", "Lúcide Muniz da Silva", 1000);
  Employee empregado2("Ivan", "Vieira da Silva", 1500);
  
  std::cout << "O nome do faz-tudo é "<< empregado2.getFirstName() 
                                      << " " << empregado2.getLastname()
            << " e seu salário anual é R$" << 12*empregado2.getMonthlySalary() << std::endl;
            
  std::cout << "O nome da gerente é "<< empregado1.getFirstName() 
                                      << " " << empregado1.getLastname()
            << " e seu salário anual é R$" << 12*empregado1.getMonthlySalary() << std::endl;
  int raise;
  std::cout << "Qual é o aumento percentual do salário do " << empregado2.getFirstName() << std::endl;
  std::cin >> raise;
  empregado2.percentRaise(raise);
  std::cout << "O salário anual reajustado do " << empregado2.getFirstName() << " é igual a R$" << 12*empregado2.getMonthlySalary() << std::endl;
  
  std::cout << "Qual é o aumento percentual do salário do " << empregado1.getFirstName() << std::endl;
  std::cin >> raise;
  empregado1.percentRaise(raise);
  std::cout << "O salário anual reajustado da " << empregado1.getFirstName() << " é igual a R$" << 12*empregado1.getMonthlySalary() << std::endl;
  
}
  

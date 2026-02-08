#include <iostream>
#include <cstdlib>
#include <iomanip>

int expIterative(int base, int exponent){
  int total{1};
  for(int i = 0; i < exponent; i++){
    total *= base;
  }
  
  return total;
}

int expRecursive(int base, int exponent){
  int total{1};
  if (exponent == 0){
    return total;
  }
  else{
    total = base*expRecursive(base, exponent-1);
    return total;
  }

}

int main(int argc, char **argv){
  int b{0};
  int e{0};
  std::cout << "Enter base: \n";
  std::cin >> b;
  std::cout << "Enter exponent: \n";
  std::cin >> e;
  std::cout << "Exponentiation : "<< expRecursive(b,e) << "\n";


  return 0;
}

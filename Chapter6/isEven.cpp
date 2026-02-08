#include <iostream>

bool isEven(int a){
  
  return a%2==0;
  
}

bool isMultiple(int large, int small){
  
  return large%small==0;


}


int main(int argc, char **argv){
  
  int a, b, c;
  
  std::cout << "Enter three numbers: \n";
  std::cin >> a >> b >> c;
  
  
  if (isEven(a) == false){
    std::cout << a << " is odd.\n";
  }
  else{
    std::cout << a << " is even.\n";
  }
  if (isMultiple(b, c) == false){
    std::cout << c << "is multiple of " << b << "?" << "Answer:" << c << " is not multiple \n"; 
  }
  else{
    std::cout << c << " is multiple of " << b << " ? Answer: YES!\n";
  }
  
  
  return 0;
}

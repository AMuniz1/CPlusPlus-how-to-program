#include <iostream>


void squareAsterisks(int side){
  
  for(int i = 0; i < side; i++){
    for(int j = 0; j < side; j++){
      std::cout << " * ";
    }
    std::cout << "\n";
  }

}

void squaredChars(int side, char character){
  
  for(int i = 0; i < side; i++){
    for(int j = 0; j < side; j++){
      std::cout <<" "<< character <<" ";
    }
    std::cout << "\n";
  }

}

int main(int argc, char **argv){
  
  int s{};
  char b{};
  
  std::cout << "Enter side and char: ";
  std::cin >> s >> b;
  squaredChars(s, b);
  return 0;
}

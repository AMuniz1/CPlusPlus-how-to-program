/*
g++ -std=c++14 example-2-5.cpp example-2-5
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int number1{0};
  int number2{0};
  int sum{0};

  cout << "Entre o primeiro inteiro: \n";
  cin >> number1;

  cout << "Entre o segundo inteiro: \n";
  cin >> number2;

  sum = number1 + number2;

  cout << "Soma é " << sum << endl;
  return 0;
}

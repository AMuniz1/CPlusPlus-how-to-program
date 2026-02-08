#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int number1{0};
  int number2{0};

  cout << "Entre com dois inteiros para comparação ";
  cin >> number1 >> number2;

  if(number1 == number2){
    cout << number1 << " é igual a " << number2 << endl;
  }
  else if(number1 > number2){
    cout << number1 << " é maior que "<< number2 << endl;
  }
  else{
    cout << number1 << " é menor que "<< number2 << endl;
  }
  return 0;
}

/*
 * Write a program that inputs a five-
 digit integer, separates the integer into its digits and prints them
 separated by three spaces each. [Hint: Use the integer division
 and remainder operators.] For example, if the user types in
 42339, the program should print: 4   2   3   3  9
 *
 */

#include <iostream>
#include <cmath>
using std::cout;
using std::cin;

int main(int argc, char const *argv[]) {
  int number, copy;
  int counter{0};
  int resultado;
  cout << "Enter a integer number: \n";
  cin >> number;
  copy = number;
  while(copy!=0){
    copy = copy / 10;
    counter = counter + 1;
  }
  cout << number << " has " << counter << " digits\n";
  int divisor{1};
  int i;
  cout << "Separating digits now: ";
  for(i = counter -1; i >= 0; i--){
    divisor = pow(10, i);
    resultado = number/divisor;
    number = number%divisor;
    cout << resultado << "   ";

  }
  cout << "\n";
  return 0;
}

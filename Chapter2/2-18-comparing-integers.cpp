/*
 * Write a program that asks the user
 to enter two integers, obtains the numbers from the user, then
 prints the larger number followed by the words "is larger." If
 the numbers are equal, print the message "These numbers are
 equal . "
 */
#include <iostream>
using std::cout;
using std::cin;

int main(int argc, char const *argv[]) {
  int number1{0};
  int number2{0};

  cout << "Enter two numbers: \n";
  cin >> number1 >> number2;

  if(number1 > number2){
    cout << number1 <<" is larger than "<< number2 << "\n";
  }
  else if(number2 > number1){
    cout << number2 <<" is larger than "<< number1 << "\n";
  }
  else{
    cout << "These numbers are equal." << "\n";
  }
  return 0;
}

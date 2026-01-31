/*
 * Write a program that reads an integer and
 determines and prints whether it’s odd or even. [Hint: Use the
 remainder operator ( % ). An even number is a multiple of two.
 Any multiple of 2 leaves a remainder of zero when divided by
 2.]
 */
#include <iostream>
using std::cout;
using std::cin;

int main(int argc, char const **argv) {
  int number{0};

  cout << "Enter a integer, please\n";
  cin >> number;

  if(number%2==0){
    cout << number << " is even.\n";
  }
  else{
    cout << number << "is odd.\n";
  }
  return 0;
}

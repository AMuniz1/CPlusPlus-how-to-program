#include <iostream>
//#include <algorithm>
using std::cout;
using std::cin;

int main(int argc, char const **argv) {

  int number1, number2, number3;
  cout << "Enter three numbers!\n ";
  cin >> number1 >> number2 >> number3;

  int smallest = number1;
  int largest = number1;
  int sum {0};
  int product{1};
  /*
   * largest = std::max({number1, number2, number3});
   * smallest = std::min({number1, number2, number3});
   */

  if(number2 > largest){
      largest = number2;
  }
  if (number2 < smallest){
      smallest = number2;
  }
  if (number3 > largest){
      largest = number3;
  }
  if (number3 < smallest){
      smallest = number3;
  }
  sum = number1 + number2 + number3;
  product = number1 * number2 * number3;
  double average = (double)(sum)/3;
  cout << "Sum is " << sum << "\n";
  cout << "The average is " << average << "\n";
  cout << "Product is "<< product << "\n";
  cout << "The smallest is " << smallest << "\n";
  cout << "The largest is " << largest << "\n";
  return 0;
}

/* Write a program that asks the user to enter
two numbers, obtains the two numbers from the user and prints
the sum, product, difference, and quotient of the two numbers. */
#include <iostream>

int main(void){

	int number1{0};
	int number2{0};

	std::cout << "Enter two numbers, please \n";
	std::cin >> number1 >> number2;

	int sum, subtraction, product;
	double quotient;
	sum = number1+ number2;
	subtraction = number1 - number2;
	product = number1 * number2;
	if(number2 !=0){
		quotient = (double)number1/number2;
	}
	std::cout << "Sum: "<< number1 << " + "
	          << number2 << " = " << sum << std::endl;
	std::cout << "Subtraction: "<< number1 << " - "
	          << number2 << " = " << subtraction << std::endl;
	std::cout << "Product: "<< number1 << " x "
	          << number2 << " = " << product << std::endl;
	std::cout << "Quotient: "<< number1 << " / "
	          << number2 << " = " << quotient << std::endl;
	return 0;
}

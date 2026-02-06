/*
 * Write a program that reads in the
 * size of the side of a square, then prints a hollow square of that
 * size out of asterisks and blanks. Your program should work for
 * squares of all side sizes between 1 and 20.
*/
#include <iostream>
using std::cout;
using std::cin;

int main(void){

	int line{1};
	int size, number;

	cout << "Enter the square's size (1-20): ";
	cin >> number;

	while(line <= number){
		size = 1;//we need to this back to 1 to make multiple lines
		while(size <= number){
			if((size == 1)||(line == 1)||(line == number)||(size == number)){
				//if size or line is equal to 1 or number
				cout << "*";
			}
			else{
				//else print empty space
				cout << " ";

			}
			size++; //increment size here, if on another place, I got errors


		}
		cout << '\n';
		line++;

	}


}

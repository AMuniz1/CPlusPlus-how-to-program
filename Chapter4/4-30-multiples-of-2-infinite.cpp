/*
 * Write a program that prints the powers of the integer 2, namely 2, 4, 8, 16, 32,
 * 64, etc. Your while loop should not terminate (i.e., you should
 * create an infinite loop). To do this, simply use the keyword true
 * as the expression for the while statement. What happens when
 * you run this program?
 */
 #include <iostream>
#include <limits>

 using std::cout;

 int main(){
     unsigned int counter{0};
     unsigned long long number{1};
     while(number < std::numeric_limits<unsigned long long>::max()){
        number *= 2;
        counter++;
        cout << number << "\n";

     }


 }

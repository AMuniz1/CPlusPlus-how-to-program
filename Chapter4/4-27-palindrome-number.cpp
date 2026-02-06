/*4.27 (Palindrome Tester) A palindrome is a number or a text phrase
 * that reads the same backward as forward. For example, each of the
 * following five-digit integers is a palindrome: 12321, 55555, 45554
 * and 11611. Write a program that reads in a five-digit integer and
 * determines whetheror not it’s a palindrome. [Hint: Use the division
 * and remainder operators to separate the number into its
 * individual digits.] */
#include <iostream>
using std::cout;
using std::cin;

int main(int argc, char **argv){

    int reversed{0};
    int number, remainder, original;
    cout << "Enter a integer: \n";
    cin >> number;
    original = number;

    while(number!=0){
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number = number / 10;
    }

    if (original == reversed){
        cout << original << " is a palindrome\n";
    }
    else{
        cout << original << " is not a palindrome\n";
    }
    return 0;
}

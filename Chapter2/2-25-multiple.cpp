/*
 * Write a program that reads in two integers and
 determines and prints if the first is a multiple of the second.
 [Hint: Use the remainder operator ( % ).]
 */
 #include <iostream>
 using std::cout;
 using std::cin;

 int main(int argc, char **argv){

     cout << "Enter two integers: \n";
     int number1{0};
     int number2{0};
     cin >> number1 >> number2;
     if (number2 == 0) {
        cout << "Division by zero is undefined.\n";
    }
     else if (number1 % number2 == 0){
         cout << number1 << " is a multiple of " << number2 << "\n";
     }
     else {
         cout << number1 << " is not a multiple of " << number2 << "\n";
     }


     return 0;
 }

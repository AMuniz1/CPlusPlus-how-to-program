/*
 * (Find the Largest) The process of finding the largest
 * number (i.e., the maximum of a group of numbers) is used
 * frequently in computer applications. For example, a program
 * that determines the winner of a sales contest inputs the number
 * of units sold by each salesperson. The salesperson who sells
 * the most units wins the contest. Write a C++ program that uses
 * a while statement to determine and print the largest of 10
 * numbers input by the user. Your program should use three
 * variables, as follows:
 * A. counter —A counter to count to 10 (i.e., to keep track of
 * how many numbers have been input and to determine
 * when all 10 numbers have been processed).
 * B. number —The current number input to the program.
 * C.largest —The largest number found so far.
 */

 #include <iostream>

 using std::cout;
 using std::cin;

 int main(int argc, char **argv){

     unsigned int counter{1};
     unsigned int number{0};
     unsigned int largest{0};

     while (counter <= 10){
         cout << "Enter the units sold: ";
         cin >> number;

         if( number > largest){
             largest = number;
         }

         counter++;
     }

     cout << "The largest unit sold was: "<< largest << "\n";

     return 0;
 }

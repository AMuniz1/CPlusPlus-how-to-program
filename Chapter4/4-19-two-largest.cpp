/*
 * 4.19 (Find the Two Largest Numbers) Using an approach
 * similar to that in Exercise 4.17, find the two largest values
 * among the 10 numbers. [Note: You must input each number
 * only once.]
 */
 #include <iostream>
 #include <limits>
 using std::cout;
 using std::cin;
 using std::numeric_limits;

 int main(int argc, char **argv){

     int largest = numeric_limits<int>::min();
     int secLargest = numeric_limits<int>::min();
     unsigned int counter{1};
     int number;


     while(counter <= 10){
         cout << "Enter a number: \n";
         cin >> number;

         if (number > largest){
             secLargest = largest;
             largest = number;
         }
         else if (number > secLargest){
             secLargest = number;
         }

         counter++;
     }

     cout << "The largest number entered is " << largest << '\n';
     cout << "The second largest number entered is "<< secLargest << '\n';


     return 0;
 }

/*
 * Write an application that finds
 * the smallest of several integers. Assume that the first value
 * read specifies the number of values to input from the user.
 */
 #include <iostream>
 using std::cout;
 using std::cin;

 int main(){

     int numbers{0},digits{0}, smallest{0};

     cout << "How much numbers: ";
     cin >> digits;

     int counter{0};
     while(counter < digits){
         cout << "Enter the number: ";
         cin >> numbers;

         if (counter == 0 ){
             smallest = numbers;
         }
         if (numbers < smallest){
             smallest = numbers;
         }
         cout << '\n';
         counter++;
     }

     cout << "The smallest integer entered: " << smallest << '\n';

     return 0;
 }

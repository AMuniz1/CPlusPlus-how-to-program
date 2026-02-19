/*
 * Write an
 * application that calculates the product of the odd integers from
 * 1 to 15.
 */
 #include <iostream>

 using std::cout;

 int main(){

     int counter{1}, product{1};

     while(counter <= 15){

         product *= counter;

         counter += 2;
     }

     cout << "The product of odd integers from 1 to 15 is "<< product << '\n';

     return 0;
 }

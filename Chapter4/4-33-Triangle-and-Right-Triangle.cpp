/*
 * 4.33 (Sides of a Triangle) Write a program that reads three
 * nonzero double values and determines and prints whether they
 * could represent the sides of a triangle.
 */
#include <iostream>

 using std::cout;
 using std::cin;

 int main(){

     double side1, side2, side3;

     cout << "Enter three sizes of sides of a triangle: ";

     cin >> side1 >> side2 >> side3;

     if (side1 > side2) std::swap(side1, side2);
     if (side2 > side3) std::swap(side2, side3);
     if (side1 > side2) std::swap(side1, side2);


     if(side1 + side2 > side3){
         cout << side1 << ", "<< side2 << " and "<< side3 << " represents a triangle.\n";

         bool right_triangle = side1*side1 + side2*side2 == side3*side3;
         if (right_triangle){
             cout << "This triangle is a right triangle\n";
         }
         else{
             cout << "This triangle is NOT a right triangle\n";
         }
     }
     else{
         cout << "These sides are not a triangle\n";
     }
 }

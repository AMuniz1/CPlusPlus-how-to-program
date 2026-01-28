/*
 * Write a
 program that reads in the radius of a circle as an integer and
 prints the circle’s diameter, circumference and area. Use the
 constant value 3.14159 for π. Do all calculations in output
 statements. [Note: In this chapter, we’ve discussed only integer
 constants and variables. In Chapter 4 we discuss floating-point
 numbers, i.e., values that have decimal points.]
 */
#include <iostream>
using std::cout;
using std::cin;

int main(int argc, char const **argv) {
  double pi = 3.14159;

  double diameter{0.0};
  double circumference{0.0};
  double area{0.0};
  double radius{0.0};
  cout << "Enter the radius of this circle: ";
  cin >> radius;
  diameter = 2*radius;
  cout << "Diameter of radius " << radius << " is " << diameter << "\n";
  circumference = 2*pi*radius;
  cout << "Circumference of radius " << radius << " is " << circumference << "\n";
  area = pi*radius*radius;
  cout << "Circle of radius " << radius << " area = " << area << "\n";
  return 0;
}

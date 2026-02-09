/*
 * 4.31 (Calculating a Circle’s Diameter, Circumference and
 * Area) Write a program that reads the radius of a circle (as a
 * double value) and computes and prints the diameter, the
 * circumference and the area. Use the value 3.14159 for π.
 */
 #include <iostream>

 using std::cout;
 using std::cin;

 int main(){

     double Pi = 3.14159;
     double area, diameter, circumference, radius;

    cout << "Enter the radius of the circle: ";
    cin >>  radius;
    area = Pi * radius * radius;
    diameter = 2 * radius;
    circumference = 2 * Pi * radius;

    cout << "The circle of radius "<< radius << " has area " << area
        << " diameter " << diameter << " and circumference " << circumference << "\n";
 }

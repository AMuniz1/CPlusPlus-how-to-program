/*
 * Drivers are concerned with the mileage
 obtained by their automobiles. One driver has kept track of
 several trips by recording miles driven and gallons used for
 each trip. Develop a C++ program that uses a while statement
 to input the miles driven and gallons used for each trip. The
 program should calculate and display the miles per gallon
 obtained for each trip and print the combined miles per gallon
 obtained for all tankfuls up to this point.
 */
#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::setprecision;
using std::fixed;
int main(int argc, char **argv){
  int miles{0};
  int gallons{0};
  double mpg{0};
  int totalMiles{0};
  int totalGallons{0};
  double totalMilePerGallon{0};

  do{
    cout << "Enter miles driven (-1 to quit): ";
    cin >> miles;
    if(miles != -1 || miles > 0){
      totalMiles += miles;
    }
    else{
      break;
    }
    cout << "Enter gallons used: ";
    cin >> gallons;
    totalGallons += gallons;
    mpg = static_cast<double>(miles)/gallons;
    cout << setprecision(2) << fixed;
    cout << "MPG this trip: " << mpg << '\n';
    totalMilePerGallon = static_cast<double>(totalMiles)/totalGallons;
    cout << setprecision(2) << fixed;
    cout << "Total MPG: " << totalMilePerGallon << '\n';
  }while(miles != -1);


}

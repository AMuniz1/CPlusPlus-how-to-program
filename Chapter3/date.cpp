#include <iostream>
#include <string>
#include "date.h"

int main(int argc, char **argv){
  Date dia(29, 2, 2024);
  dia.displayDate();
  std::cout << "\n";
  //int year;
  //std::cout << "\nEnter a year: "<< std::endl;
  //std::cin >> year;
  //if(dia.isLeapYear(year) == 1){
  // std::cout << "\nThe year " << year << "is a Leap Year!" << std::endl;
  //}
  //else{
  //  std::cout << "\nThe year " << year << " is NOT a Leap Year!" << std::endl;
  //}
}

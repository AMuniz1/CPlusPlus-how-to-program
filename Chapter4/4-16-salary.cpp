/*
 * Develop a C++ program that uses a
 * while statement to determine the gross pay for each of several
 * employees. The company pays “straight time” for the first 40
 * hours worked by each employee and pays “time-and-a-half” for
 * all hours worked in excess of 40 hours. You are given a list of
 * the employees of the company, the number of hours each
 * employee worked last week and the hourly rate of each
 * employee. Your program should input this information for each
 * employee and should determine and display the employee’s
 * gross pay.
 */
 #include <iomanip>
#include <iostream>

 using std::cout;
 using std::cin;

 int main(int argc, char **argv){

     unsigned int hours{0};
     double hourly_rate{0.00};

     cout << std::setprecision(2)<<std::fixed;

     while(hours != -1){
         cout << "Enter hours worked (-1 to end): ";
         cin >> hours;

         if(hours == -1){
             break;
         }
         cout << "Enter hourly rate of the employee ($00.00): ";
         cin >> hourly_rate;

         cout << "Salary is $"<< hourly_rate * hours << "\n";

     }


     return 0;
 }

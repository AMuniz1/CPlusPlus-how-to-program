/*
 * Write a C++ program that uses a while
 * statement and the tab escape sequence \t to print the
 * following table of values:
 */

 #include <iostream>

 using std::cout;

 int main(int argc, char **argv){

     cout << "N\t\t10*N\t\t100*N\t\t1000*N\n";
     int counter {1};
     while(counter <= 5){
         cout << counter << "\t\t" << counter * 10 << "\t\t" << counter * 100 << "\t\t" << counter * 1000 << '\n';
         counter++;
     }

     return 0;
 }

/*
 * Factorials are used frequently in probability
 * problems. The factorial of a positive integer n (written n! and
 * pronounced “n factorial”) is equal to the product of the positive
 * integers from 1 to n. Write an application that calculates the
 * factorials of 1 through 20. Use type long . Display the results in
 * tabular format. What difficulty might prevent you from
 * calculating the factorial of 100?
 */

 #include <iostream>
 #include "bignumber.h"
 using std::cout;

 BigNumber factorial (unsigned int n){

     if (n == 0){
         return 1;
     }
     if (n == 1){
         return 1;
     }
     else{
         return n * factorial(n-1);
     }
 }

 int main(){

     for(int i{1}; i <= 20; i++){
         cout << i <<"! = " << factorial(i) << '\n';
     }

     cout << "100! = " << factorial(100) << '\n';

     return 0;
 }

 /* Compilação: bin/BigNumber no diretório do arquivo .cpp
  * g++ -std=c++20 NomeDoPrograma.cpp \
        -Ibin/BigNumber/include \
        -Lbin/BigNumber/lib \
        -lBigNumber \
        -o NomeDoPrograma
  */

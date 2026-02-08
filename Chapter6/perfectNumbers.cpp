#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;

void perfectNumbers(unsigned long long number){
  unsigned long long sum = 0;
  for(unsigned long long i = 1; i <= number-1; i++){
    if(number%i == 0){
      sum += i;
    }
    if ( i > floor(sqrt(number)) && sum == 1){
      return;
    }
  }
  if (sum == number){
    cout<< number << " is a perfect number\n";
  } 
  
}
int main(){
  
  for (unsigned long long i = 2; i <= 100000; i++){
    perfectNumbers(i);
  }
  
  return 0;
}

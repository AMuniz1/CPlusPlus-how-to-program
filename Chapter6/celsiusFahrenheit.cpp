#include <iostream>
#include <iomanip>


double celsius(double degree){
  
  double c{};
  
  c = (double) (5.0)*(degree - 32)/9.0;
  
  return c;
}

double fahrenheit(double degree){

  double f{};
  
  f = (double) (9/5)*degree+32.0;
  
  return f;
}
int main(){
  
  for (int i = 0; i <= 100; i++){
    std::cout <<" " << i << "ºC = " << fahrenheit(i) << " ºF ";
    if (i% 5 == 0){
      std::cout << "\n";
    } 
  }
  
  for (int j = 32; j <= 212; j++){
    std::cout <<" " << j << "ºF = " << celsius(j) << " ºC ";
    if (j% 5 == 0){
      std::cout << "\n";
    } 
  }

  return 0;
}

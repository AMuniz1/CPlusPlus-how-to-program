#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
void itsPrime(unsigned int number){
  
  int i = sqrt(number);
  int sum = 0;
  for(int j = 2; j < i; j++){
    if (number%j==0){
      sum += j;
    }
  }
  if (sum == 0){
    cout << number << " prime!  ";
  }
  
  
}
unsigned long long mdc(unsigned long long a, unsigned long long b, int *ptr) {
    int i = 0;
    while (b != 0) {
        unsigned long long temp = b;
        b = a % b;
        a = temp;
        i++;
    }
    *ptr = i;
    return a;
}
unsigned long long mdc_indiano(unsigned long long a, unsigned long long b, int *ptr) {
    int i = 0;
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
        
        i++;
    }
    *ptr = i;
    return a;  // Ou b, já que ambos serão iguais
}


int main(int argc, char **argv){
  int n{}, a{};
  cout << "Enter two numbers: ";
  cin >> n >> a;
  
  int i, j;
  
  cout << "The greatest common divisor between " << n << " and " << a << " is " 
        << mdc(n,a, &i) << "\n";
  cout << "The greatest common divisor now with other algorithm " 
          << mdc_indiano(n, a, &j) << "\n";
          
  cout << "First algorithm: " << i << "\nSecond algorithm: " << j << "\n";
  return 0;

}

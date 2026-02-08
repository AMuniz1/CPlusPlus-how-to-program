#include <iostream>
using std::cout;
using std::cin;
template <typename T>
T minimum(T a1, T a2, T a3){
  
  if (a1< a2 && a1< a3){
    return a1;
  }
  else if (a2 < a1 && a2 < a3){
    return a2;
  }
  else{
    return a3;
  }
  
}


int main() {
  double a, b, c;
  cout << "Enter three things: ";
  cin >> a >> b >> c;  
  int d = minimum(a, b, c);
  
  cout << a << "\n";

  return 0;
}

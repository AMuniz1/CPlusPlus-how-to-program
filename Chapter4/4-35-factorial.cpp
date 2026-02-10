#include <cmath>
#include <iostream>
using std::cout;
using std::cin;

unsigned int factorial(unsigned int integer){
    if (integer == 0){
        return 1;
    }
    else if (integer == 1){
        return 1;
    }
    else{
        return integer * factorial(integer-1);
    }

}

double euler(unsigned int n){
    double e{0};
    //código mágico aqui
    //
    for(int i{0}; i <= n; i++){
        e += 1.0/factorial(i);
    }

    return e;
}

double euler_exponential(unsigned int n, unsigned int x){
    double e_x{0};

    for(int i{0}; i <= n; i++){
        e_x += (1.0*std::pow(x, i))/factorial(i);
    }

    return e_x;
}

int main(){

    unsigned int number{0};
    cout << "Enter a number non-negative: ";
    cin >> number;

    cout << number << "! = " << factorial(number) << '\n';
    cout << "The irrational number e for "<< number
            << "-estimation is "<< euler(number) << '\n';


    unsigned int number2{0};
    cout << "Enter a number non-negative: ";
    cin >> number2;

    cout << "e raise to " << number2 << " is approx ~"
            << euler_exponential(number, number2) << '\n';

}

#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::pow;
int main(){

    double pi{0.0};
    unsigned int terms{0};
    cout << "Enter the number of terms: ";
    std::cin >> terms;
    for(unsigned int i{0}; i <= terms; i++){
        pi = pi + (4.0 / (2*i + 1)) * pow(-1, i);
    }

    cout << "Pi with "<< terms << " terms is equal to "<< pi << '\n';

    return 0;
}

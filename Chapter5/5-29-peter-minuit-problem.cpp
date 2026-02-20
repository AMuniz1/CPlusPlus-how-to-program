#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;

int main(){

    cout << std::fixed << std::setprecision(2);

    long double principal{24.00};
    int rate;




    for(rate = 5; rate <= 10; rate += 1){
        double real_rate{rate/100.0};
        cout << "Initial principal: " << principal << '\n';
        cout << "    Interest rate: " << real_rate << '\n';
        cout << "\nYear" << std::setw(20) << "Amount on deposit\n";
        for(unsigned int year{1}; year <= 390; year++){
            double amount = principal * pow(1.0 + real_rate, year);
            if (year % 5 == 0){
                cout << "***************\n";
            }
            cout << std::setw(4) << year << std::setw(35) << amount << '\n';
        }
    }

    return 0;
}

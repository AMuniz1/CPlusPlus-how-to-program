#include <iomanip>
#include <iostream>
using std::cout;
using std::cin;

int main(void){

    double sales{0.00};


    cout << std::setprecision(2)<< std::fixed;

    while(sales != -1){
        double balance{200.00};
        cout << "Enter sales in dollars (-1 to end): \n";
        cin >> sales;
        if(sales == -1){
            break;
        }
        balance += 0.09 * sales;

        cout << "Salary is : " << balance << '\n';

    }


    return 0;
}

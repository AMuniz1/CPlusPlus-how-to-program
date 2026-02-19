#include <iomanip>
#include <iostream>

using std::cout;
using std::cin;

int main(){

    unsigned int quantity{1};
    double total_bought{0.0};
    unsigned int code{1};
    cout << std::fixed << std::setprecision(2);
    while (quantity != 0){

        cout << "Enter the code of the product you want to buy : ";
        cout << "\n1. Item 1: $2.98\n2. Item 2: $4.50\n3. Item 3: $9.98\n4. Item 4: $4.49\n5. Item 5: $6.87\n";
        cin >> code;
        cout << "Enter the quantity (quantity = 0 to quit)\n";
        cin >> quantity;


        switch(code){
            case 1:
                total_bought += 2.98 * quantity;
                break;
            case 2:
                total_bought += 4.50 * quantity;
                break;
            case 3:
                total_bought += 9.98 * quantity;
                break;
            case 4:
                total_bought += 4.49 * quantity;
                break;
            case 5:
                total_bought += 6.87 * quantity;
                break;
            default:
                cout << "Not a valid code\n";
        }



    }

    cout << "You bought $"<< total_bought << " of groceries\n";

    return 0;
}

#include <iostream>

using std::cout;
using std::cin;

int main(void){

    unsigned int passes{0};
    unsigned int failures{0};
    unsigned int studentCounter{1};

    while (studentCounter <= 10){

        int result{0};
        while(result != 1 && result != 2){
            cout << "Enter result (1 = pass, 2 = fail) : ";
            cin >> result;
        }

        if(result == 1){
            passes += 1;
        }
        else{
            failures += 1;
        }

        studentCounter++;

    }

    cout << "Passed: " << passes << "\nFailed: "<< failures << '\n';

    if(passes > 8){
        cout << "Bonus to instructor!\n";
    }
}

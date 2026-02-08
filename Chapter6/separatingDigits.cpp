#include <iostream>
#include <cmath>  // Para a função pow (embora não seja mais necessária)
using namespace std;

void separating(int number) {
    int quotient{0};
    int totalDigits{0};
    
    int n1 = number;
    
    // Conta o número de dígitos
    while (n1 != 0) {
        n1 = n1 / 10;
        totalDigits++;
    }
    
    // Caso especial para o número 0
    if (number == 0) {
        totalDigits = 1;
    }

    // Imprime os dígitos separadamente
    for (int i = totalDigits - 1; i >= 0; i--) {
        int exp = std::pow(10, i);  // Correção aqui
        quotient = number / exp;
        number = number % exp;

        cout << quotient << " ";
    }
    cout << endl;
}

int main() {
    int n{};
    cout << "Enter a number, please: ";
    cin >> n;

    separating(n);

    return 0;
}

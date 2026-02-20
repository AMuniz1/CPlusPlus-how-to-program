#include <iomanip>
#include <string>
#include <iostream>
#include "5-33-DollarAmount.h"  // Inclui a classe DollarAmount do exercício 5-33

using std::string;
using std::cout;

class Account {
public:
    // Constructor - agora recebe dollars e cents separadamente
    Account(unsigned int accNumber,
            const string& first,
            const string& last,
            int64_t initialDollars = 0,
            int64_t initialCents = 0)
        : accountNumber{accNumber},
          firstName{first},
          lastName{last},
          balance{initialDollars >= 0 ? initialDollars : 0,
                  initialDollars >= 0 ? initialCents : 0} {}

    // Constructor alternativo que aceita centavos totais
    Account(unsigned int accNumber,
            const string& first,
            const string& last,
            int64_t totalCents)
        : accountNumber{accNumber},
          firstName{first},
          lastName{last},
          balance{totalCents >= 0 ? totalCents : 0} {}

    // Deposit - recebe DollarAmount
    void deposit(DollarAmount amount) {
        balance.add(amount);
    }

    // Deposit alternativo - recebe dollars e cents
    void deposit(int64_t dollars, int64_t cents) {
        if (dollars >= 0 && cents >= 0) {
            DollarAmount amount{dollars, cents};
            balance.add(amount);
        }
    }

    // Withdraw - recebe DollarAmount
    bool withdraw(DollarAmount amount) {
        // Precisamos comparar balance com amount
        // Vamos criar um método auxiliar para obter centavos totais
        DollarAmount tempBalance = balance;
        tempBalance.subtract(amount);

        // Se a subtração resultar em valor negativo, não permite
        if (tempBalance.toString()[0] == '-') {
            cout << "Withdrawal amount exceeded account balance.\n";
            return false;
        } else {
            balance.subtract(amount);
            return true;
        }
    }

    // Withdraw alternativo - recebe dollars e cents
    bool withdraw(int64_t dollars, int64_t cents) {
        DollarAmount amount{dollars, cents};
        return withdraw(amount);
    }

    // Getters
    unsigned int getAccountNumber() const {
        return accountNumber;
    }

    string getFirstName() const {
        return firstName;
    }

    string getLastName() const {
        return lastName;
    }

    DollarAmount getBalance() const {
        return balance;
    }

    string getBalanceString() const {
        return balance.toString();
    }

    // Setters
    void setFirstName(const string& first) {
        firstName = first;
    }

    void setLastName(const string& last) {
        lastName = last;
    }

    // Display
    void displayAccount() const {
        cout << "Account Number: " << accountNumber << "\n"
             << "Name: " << firstName << " " << lastName << "\n"
             << "Balance: $" << balance.toString() << "\n";
    }

private:
    unsigned int accountNumber{0};
    string firstName;
    string lastName;
    DollarAmount balance{0};  // Agora usa DollarAmount em vez de double
};

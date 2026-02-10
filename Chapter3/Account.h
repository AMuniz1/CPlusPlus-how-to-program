#include <iomanip>
#include <string>
#include <iostream>

using std::string;
using std::cout;

class Account {
public:
    // Constructor
    Account(unsigned int accNumber,
            const string& first,
            const string& last,
            double initialBalance = 0.0)
        : accountNumber{accNumber},
          firstName{first},
          lastName{last},
          balance{initialBalance > 0 ? initialBalance : 0.0} {}

    // Deposit
    void deposit(double amount) {
        if (amount > 0.0) {
            balance += amount;
        }
    }

    // Withdraw
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Withdrawal amount exceeded account balance.\n";
        } else if (amount > 0.0) {
            balance -= amount;
        }
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

    double getBalance() const {
        return balance;
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
        cout << std::fixed << std::setprecision(2);
        cout << "Account Number: " << accountNumber << "\n"
             << "Name: " << firstName << " " << lastName << "\n"
             << "Balance: " << balance << "\n";
    }

private:
    unsigned int accountNumber{0};
    string firstName;
    string lastName;
    double balance{0.0};
};

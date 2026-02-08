/*
 * (Credit Limits) Develop a C++ program that will
 determine whether a department-store customer has exceeded
 the credit limit on a charge account. For each customer, the
 following facts are available:
 A. Account number (an integer)
 B. Balance at the beginning of the month
 C. Total of all items charged by this customer this month
 D. Total of all credits applied to this customer's account this
 month
 E. Allowed credit limit
 The program should use a while statement to input each of
 these facts, calculate the new balance (= beginning balance +
 charges – credits) and determine whether the new balance
 exceeds the customer’s credit limit. For those customers whose
 credit limit is exceeded, the program should display the
 customer’s account number, credit limit, new balance and the
 message “Credit Limit Exceeded.”
 */
 #include <iomanip>
#include <iostream>
 using std::cout;
 using std::cin;

 int main(void){

     unsigned int account_number{0};
     double balance{0.0};
     double charges{0.0};
     double credits{0.0};
     double limits{0.0};



     while(account_number != -1){
         cout << "Enter account number (or -1 to quit): \n";
         cin >> account_number;

         if (account_number == -1){
             break;
         }

         cout << "Enter beggining balance: \n";
         cin >> balance;

         cout << "Enter total charges: \n";
         cin >> charges;

         cout << "Enter total credits: \n";
         cin >> credits;

         cout << "Enter credit limits: \n";
         cin >> limits;
         balance = balance + charges - credits;
         cout << std::setprecision(2) << std::fixed;
         cout << "New balance is " << balance << '\n';


         if (balance > limits){
             cout << "Account:       " << account_number << '\n';
             cout << "Credit limit:  " << limits << '\n';
             cout << "Balance: " << balance << '\n';
             cout << "Credit Limit Exceeded\n";
         }

     }
     return 0;
 }

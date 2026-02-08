//creating and manipulating an Account object
#include <iostream>
#include <string>
#include "Account.h"
using std::cout;
using std::cin;

int main(){
  Account myAccount; //create an Account object: myAccount

  //show that the initial value of myAccount's name is the empty string
  cout << "Initial account name is: " << myAccount.getName();

  //prompt for and read the name
  cout << "\nPlease enter the account name: ";
  string theName;
  getline(cin, theName); //read a line of text
  myAccount.setName(theName);

  //display the name stored in object myAccount
  cout << "Name in object myAccount is: " << myAccount.getName() << '\n';
  return 0;
}

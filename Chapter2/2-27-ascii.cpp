/*
 * This is called a cast operation (we formally introduce casts in
 Chapter 4). When the preceding statement executes, it prints
 the value 65 (on systems that use the ASCII character set).
 Write a program that prints the integer equivalent of a character
 typed at the keyboard. Store the input in a variable of type
 char . Test your program several times using uppercase letters,
 lowercase letters, digits and special characters (such as $ ).
 *
 */
#include <iostream>
using std::cout;
using std::cin;

int main(int argc, char **argv){

    char character;
    cout << "Enter a character: ";
    cin >> character;

    cout << "Integer equivalent of the character: " << static_cast<int>(character);

    return 0;
}

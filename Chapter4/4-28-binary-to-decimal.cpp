/*
 * Input an integer containing only 0s and 1s (i.e., a “binary”
 * integer) and print its decimal equivalent. Use the remainder and
 * division operators to pick off the “binary” number’s digits one at
 * a time from right to left. Much as in the decimal number system,
 * where the rightmost digit has a positional value of 1, the next
 * digit left has a positional value of 10, then 100, then 1000, and
 * so on, in the binary number system the rightmost digit has a
 * positional value of 1, the next digit left has a positional value of
 * 2, then 4, then 8, and so on. Thus the decimal number 234 can
 * be interpreted as 2 * 100 + 3 * 10 + 4 * 1. The decimal
 * equivalent of binary 1101 is 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 or 1 + 0
 * + 4 + 8, or 13. [Note: To learn more about binary numbers,
 * refer to Appendix D.]
 */
#include <iostream>
using std::cout;
using std::cin;
int main(int argc, char **argv){

    int remainder, binary;
    int digit{0};

    cout << "Enter a binary number: \n";
    cin >> binary;

    int counter{1};
    int original{binary};

    while(binary != 0){
        remainder = binary % 10;
        if (remainder == 1){
            digit = digit * remainder*counter;
        }
        binary /= 10;
        counter *= 2;
    }

    cout << "The binary number " << original << " converted to decimal is " << digit << '\n';


    return 0;
}

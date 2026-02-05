#include <iostream>
#include "Complex.h"
using std::cout;

int main(int argc, char **argv){

    Complex a(5,-1), b(2, 3), c1, c2(2,4), c3(3,-1), c4, c5(2, 1), c6(3, -1), c7;

    c1 = a + b;

    cout << a << " + "<< b << " = "<< c1 << "\n";

    c4 = c2 * c3;
    cout << c2 << " * "<< c3 << " = "<< c4 << "\n";

    c7 = c5 / c6;
    cout << c5 << " / "<< c6 << " = "<< c7<< "\n";


    return 0;
}

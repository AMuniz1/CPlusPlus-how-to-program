#include <iostream>
#include <iomanip>

using std::cout;
using std::setw;

int main() {
    const int COL = 12;
    cout << std::left;

    // linha 1
    cout << setw(COL) << "*********"
         << setw(COL) << "   ***   "
         << setw(COL) << "    *    "
         << setw(COL) << "    *    "
         << "\n\n";

    // linha 2
    cout << setw(COL) << "*       *"
         << setw(COL) << " *     * "
         << setw(COL) << "   ***   "
         << setw(COL) << "   * *   "
         << "\n\n";

    // linha 3
    cout << setw(COL) << "*       *"
         << setw(COL) << "*       *"
         << setw(COL) << "  *****  "
         << setw(COL) << "  *   *  "
         << "\n\n";

    // linha 4
    cout << setw(COL) << "*       *"
         << setw(COL) << "*       *"
         << setw(COL) << "    *    "
         << setw(COL) << " *     * "
         << "\n\n";

    // linha 5
    cout << setw(COL) << "*       *"
         << setw(COL) << "*       *"
         << setw(COL) << "    *    "
         << setw(COL) << "*       *"
         << "\n\n";

    // linha 6
    cout << setw(COL) << "*       *"
         << setw(COL) << "*       *"
         << setw(COL) << "    *    "
         << setw(COL) << " *     * "
         << "\n\n";

    // linha 7
    cout << setw(COL) << "*       *"
         << setw(COL) << " *     * "
         << setw(COL) << "    *    "
         << setw(COL) << "   * *   "
         << "\n\n";

    // linha 8
    cout << setw(COL) << "*********"
         << setw(COL) << "   ***   "
         << setw(COL) << "    *    "
         << setw(COL) << "    *    "
         << "\n\n";

    return 0;
}

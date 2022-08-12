#include <iostream>
using namespace std;

void greetings_ntimes(int);  // Either "int" or "int n" works
int square(int);

int chapter3() {
    cout << "<Chapter 3>" << endl;

    int n{0x48};

    cout << "decimal: n{0x48}: " << n << endl;
    cout << hex << "hex n{0x48}: " << n << endl;
    cout << oct << "oct n{0x48}: " << n << endl;

    return 0;
}

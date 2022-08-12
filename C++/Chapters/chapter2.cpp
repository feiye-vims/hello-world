#include <iostream>
using namespace std;

void greetings_ntimes(int);  // Either "int" or "int n" works
int square(int);

int chapter2() {
    cout << "<Chapter 2>" << endl;

    int n = 2;
    int && m = square(n);

    greetings_ntimes(n);

    cout << m << "; address: " << &m << endl;

    return 0;
}

void greetings_ntimes(int n) {
    for (int i=0; i<n; i++) {
        cout << "Greetings! No." << i+1 << endl;
    }
}

int square(int n) {
    return n*n;
}

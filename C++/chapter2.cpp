#include <iostream>
using namespace std;

void greetings_ntimes(int);  // Either "int" or "int n" works
int square(int);

int main() {
    int n = 3;
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
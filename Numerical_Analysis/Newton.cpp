/* Newton's method
f(x) = 3x + sinx - e^x
f'(x) = 3 + cosx - e^x

Seek x that satisfies f(x) = 0
*/

#include <iostream>
#include <cmath>

int main(int argc, char** argv) {
    using namespace::std;

    // intial guess
    double x0{1.0}, x1{1.0}, y, y_prime, err{100.0};
    double tol{1e-8};
    int n{0};

    while (abs(err) > tol) {
        y = 3*x0 + sin(x0) - exp(x0);
        y_prime = 3 + cos(x0) - exp(x0);
        x1 = x0 - y/y_prime;
        err = x1 - x0;
        cout.precision(17);
        cout << "Iter " << n << ": x0=" << x0 << ", x1=" << x1 << ", y=" << y << endl;

        x0 = x1;
        n++;
    }

    return 0;
}

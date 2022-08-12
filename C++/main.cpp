#include <iostream>
#include "chapter2.cpp"
#include "chapter3.cpp"

int main(int, char**) {
    std::cout << "Main routine for C++ Primer Plus Exercise\n\n";

    // Chapter 2
    chapter2();
    std::cout << endl;
    //
    // Chapter 3
    chapter3();
    std::cout << endl;
}

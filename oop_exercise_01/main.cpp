#include <iostream>
#include "Complex.h"

using std::cin;
using std::cout;

int main() {
    Complex a(1,1);
    Complex b(2,2);
    //cin >> a;
    a = b + a;
    cout << a << std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

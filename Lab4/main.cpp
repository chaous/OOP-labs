#include <iostream>
#include "rhombus.h"
#include "hexagon.h"
#include "pentagon.h"

using std::cin;
using std::cout;




void test(){
    Pentagon r, r2;
    cin >> r;
    r2 = r;
    cout << (r2 == r);

}



int main() {
    test();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

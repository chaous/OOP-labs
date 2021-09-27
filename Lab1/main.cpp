#include <iostream>
#include "rhombus.h"
#include "hexagon.h"
#include "pentagon.h"

using std::cin;
using std::cout;




void test(){
    Pentagon p(cin);
    p.Print(cout);
    cout << p.Area();

}



int main() {
    test();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

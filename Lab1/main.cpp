#include <iostream>
#include "Rhombus.h"
#include "Hexagon.h"
#include "Pentagon.h"

using std::cin;
using std::cout;




void test(){
    Pentagon p;
    cin >> p;
    p.Print();
    cout << p.Area();

}



int main() {
    test();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

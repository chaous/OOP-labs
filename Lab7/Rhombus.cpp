//
// Created by Илья Рожков on 12.09.2021.
//

#include "Rhombus.h"
#include <string.h>
#include "GeronFormula.h"


using std::pair;
typedef pair<double, double> Cordinate;

/*double getDistance(const pair<double, double>& x , const pair<double, double>& y)
{
    return sqrt(pow((x.first - y.first), 2) + pow((x.second - y.second), 2));
}*/



Rhombus::Rhombus() {

}

Rhombus::~Rhombus() {

}

double Rhombus::Area() const {
    return 0.5 * getDistance(_x1, _x3) * getDistance(_x2, _x4);
}

Rhombus::Rhombus(Cordinate &x1, Cordinate &x2, Cordinate &x3, Cordinate &x4) : _x1(x1), _x2(x2), _x3(x3), _x4(x4){
    if(!IsRhombus())
        throw  "not correct input";
}

size_t Rhombus::VertexesNumber() const {
    return 4;
}

bool Rhombus::IsRhombus() const {
    if (getDistance(_x1, _x2) == getDistance(_x2, _x3) && getDistance(_x2, _x3) == getDistance(_x3, _x4) &&
    getDistance(_x3, _x4) == getDistance(_x4, _x1) && getDistance(_x4, _x1) == getDistance(_x1, _x2))
        return true;
    return false;
}



void Rhombus::Print() const {
    std::cout << "first coordinate " <<   _x1.first << ' ' << _x1.second << " second coordinate " <<  _x2.first << ' ' << _x2.second << " third coordinate " <<
              _x3.first << ' ' << _x3.second << " forth coordinate " << _x4.first << ' ' << _x4.second;

}

std::ostream& operator<<(std::ostream &os, const Rhombus& r)
{
    os << "first coordinate " <<   r._x1.first << ' ' << r._x1.second << " second coordinate " <<  r._x2.first << ' ' << r._x2.second << " third coordinate " <<
    r._x3.first << ' ' << r._x3.second << " forth coordinate " << r._x4.first << ' ' << r._x4.second;
    return os;
}

std::istream &operator>>(std::istream &in, Rhombus &r) {
    in >> r._x1.first >> r._x1.second >> r._x2.first >> r._x2.second >> r._x3.first >> r._x3.second >> r._x4.first >> r._x4.second;
    if(!r.IsRhombus())
        throw  "not correct input";
    return in;
}

Rhombus::Rhombus(const Rhombus &r) : _x1(r._x1), _x2(r._x2), _x3(r._x3), _x4(r._x4) {

}




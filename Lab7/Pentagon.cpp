//
// Created by Илья Рожков on 15.09.2021.
//

#include "Pentagon.h"
#include <string.h>
#include "GeronFormula.h"




/*
{
    double p, s;
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}

double getDistance(const std::pair<double, double>& x , const std::pair<double, double>& y)
{
    return sqrt(pow((x.first - y.first), 2) + pow((x.second - y.second), 2));
}

double GeronFormulaFromCordinates(Cordinate a,Cordinate b,Cordinate c)
{
    double x = getDistance(a, b);
    double y = getDistance(b, c);
    double z = getDistance(c, a);
    return GeronFormula(x, y, z);
}
*/

Pentagon::Pentagon() {
    for (int i = 0; i < 5; i++) {
        Cordinate elemt = std::make_pair(0,0);
        _cordinates.push_back(elemt);
        //_cordinates[i].first = 0;
        //_cordinates[i].second = 0;
    }

}

Pentagon::~Pentagon() {


}

size_t Pentagon::VertexesNumber() const {
    return 5;
}

Pentagon::Pentagon(const std::vector<Cordinate> &cordinates) : _cordinates(cordinates){
    if (_cordinates.size() != 5)
        throw std::out_of_range("wrong number of cordinates");

}

double Pentagon::Area() const {
    return AreaOfMultigone(_cordinates);

}

std::ostream &operator<<(std::ostream &out, const Pentagon &r) {
    for (int i = 0; i < r._cordinates.size(); i++)
        out << r._cordinates[i].first << ' ' << r._cordinates[i].second << std::endl;
    return out;
}

std::istream &operator>>(std::istream &in, Pentagon &r) {
    for (int i = 0; i < 5; i++)
        in >> r._cordinates[i].first >> r._cordinates[i].second;
    return in;
}

void Pentagon::Print() const {
    for (int i = 0; i < _cordinates.size(); i++)
        std::cout << _cordinates[i].first << ' ' << _cordinates[i].second << std::endl;

}

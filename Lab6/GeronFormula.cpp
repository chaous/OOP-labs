//
// Created by Илья Рожков on 16.09.2021.
//
#include "GeronFormula.h"
#include<cmath>


double GeronFormula(double a, double b, double c) {
    double p, s;
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}

double getDistance(const std::pair<double, double> &x, const std::pair<double, double> &y) {
    return sqrt(pow((x.first - y.first), 2) + pow((x.second - y.second), 2));
}

double GeronFormulaFromCordinates(const Cordinate &a, const Cordinate &b, const Cordinate &c) {
    double x = getDistance(a, b);
    double y = getDistance(b, c);
    double z = getDistance(c, a);
    return GeronFormula(x, y, z);
}

double AreaOfMultigone(const std::vector<Cordinate> &cordinates) {
    double s = 0;
    for (int i = 0; i < cordinates.size(); i += 3)
        s += GeronFormulaFromCordinates(cordinates[i], cordinates[(i + 1) % cordinates.size()], cordinates[(i + 2) % cordinates.size()]);
    return s;
}

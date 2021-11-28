//
// Created by Илья Рожков on 16.09.2021.
//

#ifndef LAB1_GERONFORMULA_H
#define LAB1_GERONFORMULA_H

#include <utility>
#include <vector>

typedef std::pair<double, double> Cordinate;


double GeronFormula(double a, double b, double c);
double getDistance(const std::pair<double, double>& x , const std::pair<double, double>& y);
double GeronFormulaFromCordinates(const Cordinate& a, const Cordinate& b,const Cordinate& c);
double AreaOfMultigone(const std::vector<Cordinate>& cordinates);


#endif //LAB1_GERONFORMULA_H

//
// Created by Илья Рожков on 12.09.2021.
//

#ifndef LAB1_FIGURE_H
#define LAB1_FIGURE_H
#include "iostream"
#include <utility>
#include <math.h>
#include <cmath>





class Figure {

public:
    virtual void Print() const = 0;
    virtual size_t VertexesNumber() const = 0;
    virtual double Area() const = 0;


};


#endif //LAB1_FIGURE_H

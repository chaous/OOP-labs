//
// Created by Илья Рожков on 12.09.2021.
//

#ifndef LAB1_RHOMBUS_H
#define LAB1_RHOMBUS_H


#include "Figure.h"
#include <utility>



//using std::pair;
typedef std::pair<double, double> Cordinate;

class Rhombus : public Figure {
public:
    Rhombus();
    ~Rhombus();
    Rhombus(const Rhombus& r);
    double Area() const override;
    Rhombus(Cordinate& x1, Cordinate& x2, Cordinate& x3, Cordinate& x4);
    size_t VertexesNumber() const override;
    bool IsRhombus() const;
    //std::istream& operator>> (std::istream& is) override;
    //std::ostream& operator<<(std::ostream& os);
    void Print() const override;
    friend std::ostream& operator<<(std::ostream &os, const Rhombus& r);
    friend std::istream& operator>> (std::istream &in, Rhombus &r);





protected:
    Cordinate _x1, _x2, _x3, _x4;

};


#endif //LAB1_RHOMBUS_H

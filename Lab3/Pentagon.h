//
// Created by Илья Рожков on 15.09.2021.
//

#ifndef LAB1_PENTAGON_H
#define LAB1_PENTAGON_H


#include "Figure.h"
#include <vector>


typedef std::pair<double, double> Cordinate;

class Pentagon : public Figure {
public:
    Pentagon();
    ~Pentagon();
    size_t VertexesNumber() const override;
    Pentagon(const std::vector<Cordinate>& cordinates);
    double Area() const override;
    void Print() const override;
    friend std::ostream& operator<<(std::ostream &out, const Pentagon& r);
    friend std::istream& operator>> (std::istream &in, Pentagon&r);



protected:
    std::vector<Cordinate> _cordinates;

};


#endif //LAB1_PENTAGON_H

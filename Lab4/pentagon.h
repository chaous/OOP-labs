//
// Created by Илья Рожков on 15.09.2021.
//

#ifndef LAB1_PENTAGON_H
#define LAB1_PENTAGON_H


#include "figure.h"
#include <vector>


typedef std::pair<double, double> Cordinate;

class Pentagon : public Figure {
public:
    Pentagon();
    ~Pentagon();
    Pentagon(std::istream &in);
    size_t VertexesNumber() const override;
    Pentagon(const std::vector<Cordinate>& cordinates);
    double Area() const override;
    Pentagon& operator=(const Pentagon& p);
    bool operator==(const Pentagon& p) const;
    void Print(std::ostream& os) const override;
    friend std::ostream& operator<<(std::ostream &out, const Pentagon& r);
    friend std::istream& operator>> (std::istream &in, Pentagon&r);



protected:
    std::vector<Cordinate> _cordinates;

};


#endif //LAB1_PENTAGON_H

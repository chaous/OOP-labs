//
// Created by Илья Рожков on 16.09.2021.
//

#ifndef LAB1_HEXAGON_H
#define LAB1_HEXAGON_H
#include "figure.h"
#include "GeronFormula.h"



class Hexagon : public Figure {
public:
    Hexagon();
    ~Hexagon();
    Hexagon& operator=(const Hexagon& h);
    bool operator==(const Hexagon& h) const;
    Hexagon(std::istream &in);
    Hexagon(const std::vector<Cordinate>& cordinates);
    size_t VertexesNumber() const override;
    double Area() const override;
    void Print(std::ostream& os) const override;
    friend std::ostream& operator<<(std::ostream &out, const Hexagon& r);
    friend std::istream& operator>> (std::istream &in, Hexagon& r);



protected:
    std::vector<Cordinate> _cordinates;

};


#endif //LAB1_HEXAGON_H

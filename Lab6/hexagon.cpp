//
// Created by Илья Рожков on 16.09.2021.
//

#include "hexagon.h"

Hexagon::Hexagon() {
    for (int i = 0; i < 6; i++) {
        Cordinate elemt = std::make_pair(0, 0);
        _cordinates.push_back(elemt);
    }

}

Hexagon::Hexagon(const std::vector<Cordinate> &cordinates) : _cordinates(cordinates) {
    if (_cordinates.size() != 6) {
        throw "wrong size";
    }

}

size_t Hexagon::VertexesNumber() const {
    return 6;
}

double Hexagon::Area() const {
    return AreaOfMultigone(_cordinates);
}

void Hexagon::Print(std::ostream& os) const {
    os << "Hexagon: ";
    for (int i = 0; i < _cordinates.size(); i++)
        os << '(' << _cordinates[i].first << ", " << _cordinates[i].second << ") ";
    os << '\n';
    //return os;

}

std::ostream &operator<<(std::ostream &os, const Hexagon &r) {
    os << "Hexagon: ";
    for (int i = 0; i < r._cordinates.size(); i++)
        os << '(' << r._cordinates[i].first << ", " << r._cordinates[i].second << ") ";
    os << '\n';
    return os;
}

std::istream &operator>>(std::istream &in, Hexagon &r) {
    for (int i = 0; i < 6; i++)
        in >> r._cordinates[i].first >> r._cordinates[i].second;
    return in;
}



Hexagon::Hexagon(std::istream &in) {
    for (int i = 0; i < 6; i++) {
        Cordinate elemt = std::make_pair(0, 0);
        _cordinates.push_back(elemt);
    }
    for (int i = 0; i < 6; i++)
        in >> _cordinates[i].first >> _cordinates[i].second;
    //return in;

}

Hexagon &Hexagon::operator=(const Hexagon &h) {
    if (&h == this)
        return *this;
    _cordinates = h._cordinates;
    return *this;
}

bool Hexagon::operator==(const Hexagon &h) const {
    return _cordinates == h._cordinates;
}

Hexagon::~Hexagon() {

}

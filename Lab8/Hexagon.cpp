//
// Created by Илья Рожков on 16.09.2021.
//

#include "Hexagon.h"

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

void Hexagon::Print() const {
    for (int i = 0; i < _cordinates.size(); i++)
        std::cout << _cordinates[i].first << ' ' << _cordinates[i].second << std::endl;

}

std::ostream &operator<<(std::ostream &out, const Hexagon &r) {
    for (int i = 0; i < r._cordinates.size(); i++)
        out << r._cordinates[i].first << ' ' << r._cordinates[i].second << std::endl;
    return out;
}

std::istream &operator>>(std::istream &in, Hexagon &r) {
    for (int i = 0; i < 6; i++)
        in >> r._cordinates[i].first >> r._cordinates[i].second;
    return in;
}

Hexagon::~Hexagon() {

}

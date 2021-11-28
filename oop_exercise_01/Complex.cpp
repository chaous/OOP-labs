//
// Created by Илья Рожков on 28.11.2021.
//

#include "Complex.h"

Complex::Complex() : _real(0), _imag(0){

}

Complex::Complex(float a) : _real(a), _imag(0) {

}

Complex::Complex(float a, float b) : _real(a), _imag(b){

}

std::istream &operator>>(std::istream &is, Complex &a) {
    is >> a._real >> a._imag;
    return is;
}

std::ostream &operator<<(std::ostream &out, Complex &a) {
    out << a._real << ' ' << a._imag;
    return out;
}

bool Complex::operator==(Complex& a) const {
    return (_real == a._real) && (_imag == a._imag);
}

Complex &Complex::operator=(const Complex& a) {
    if (this == &a)
        return *this;
    _real = a._real;
    _imag = a._imag;
    return *this;
}

bool Complex::operator==(const Complex &a) const {
    return (_real == a._real) && (_imag == a._imag);
}

Complex Complex::operator+(Complex &a) const {
    Complex b;
    b._real = _real + a._real;
    b._imag = _imag + a._imag;
    return b;
}

Complex Complex::operator+(const Complex &a) const {
    Complex b;
    b._real = _real + a._real;
    b._imag = _imag + a._imag;
    return b;
}

Complex Complex::operator-(Complex &a) const {
    Complex b;
    b._real = _real - a._real;
    b._imag = _imag - a._imag;
    return b;
}

Complex Complex::operator-(const Complex &a) const {
    Complex b;
    b._real = _real - a._real;
    b._imag = _imag - a._imag;
    return b;
}

bool Complex::operator!=(const Complex &a) const {
    return !(*this == a);
}

bool Complex::operator!=(Complex &a) const {
    return !(*this == a);
}

Complex &Complex::operator+=(const Complex &a) {
    *this = *this + a;
    return *this;
}

Complex &Complex::operator+=(Complex &a) {
    *this = *this + a;
    return *this;
}

Complex &Complex::operator-=(const Complex &a) {
    *this = *this - a;
    return *this;
}

Complex &Complex::operator-=(Complex &a) {
    *this = *this - a;
    return *this;
}

Complex Complex::operator*(Complex &a) const {
    Complex b;
    b._real = _real * a._real - _imag * a._imag;
    b._imag = _real * a._imag + _imag * a._real;
    return b;
}

Complex Complex::operator*(const Complex &a) const {
    Complex b;
    b._real = _real * a._real - _imag * a._imag;
    b._imag = _real * a._imag + _imag * a._real;
    return b;
}

Complex Complex::operator/(const Complex &a) const {
    Complex b;
    b._real = (_real * a._real + _imag * a._imag) / (a._real * a._real + a._imag * a._imag);
    b._imag = (_imag * a._real - _real * a._imag) / (a._real * a._real + a._imag * a._imag);
    return b;
}

Complex Complex::operator/(Complex &a) const {
    Complex b;
    b._real = (_real * a._real + _imag * a._imag) / (a._real * a._real + a._imag * a._imag);
    b._imag = (_imag * a._real - _real * a._imag) / (a._real * a._real + a._imag * a._imag);
    return b;
}

Complex& Complex::operator/=(const Complex &a) {
    *this = *this / a;
    return *this;
}

Complex& Complex::operator/=(Complex &a) {
    *this = *this / a;
    return *this;
}

Complex &Complex::operator*=(const Complex &a) {
    *this = *this * a;
    return *this;
}

Complex& Complex::operator*=(Complex &a) {
    *this = *this * a;
    return *this;
}

Complex Complex::conj() const {
    Complex a;
    a._real = _real;
    a._imag = (-1) * _imag;
    return a;
}


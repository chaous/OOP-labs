//
// Created by Илья Рожков on 28.11.2021.
//

#ifndef OOP_EXERCISE_01_COMPLEX_H
#define OOP_EXERCISE_01_COMPLEX_H
#include "iostream"


class Complex {
    public:
    Complex();
    explicit Complex(float a);
    Complex(float a, float b);
    friend std::istream& operator>> (std::istream& is, Complex& a);
    friend std::ostream& operator<< (std::ostream& out, Complex& a);
    bool operator==(Complex& a) const;
    bool operator==(const Complex& a) const;
    Complex& operator=(const Complex& a);
    Complex operator+(Complex& a) const;
    Complex operator+(const Complex& a) const;
    Complex operator-(Complex& a) const;
    Complex operator-(const Complex& a) const;
    bool operator!=(const Complex& a) const;
    bool operator!=(Complex& a) const;
    Complex& operator+=(const Complex& a);
    Complex& operator+=(Complex& a);
    Complex& operator-=(const Complex& a);
    Complex& operator-=(Complex& a);
    Complex operator*(const Complex& a) const;
    Complex operator/(const Complex& a) const;
    Complex operator*(Complex& a) const;
    Complex operator/(Complex& a) const;
    Complex& operator/=(const Complex& a);
    Complex& operator/=(Complex& a);
    Complex& operator*=(const Complex& a);
    Complex& operator*=(Complex& a);
    Complex conj() const;


protected:
    float _real, _imag;
};


#endif //OOP_EXERCISE_01_COMPLEX_H

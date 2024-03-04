#include "trojkat.h"
#include <iostream>
#include <cmath>

using namespace std;

Trojkat::Trojkat(double a, double b, double c) : a(a), b(b), c(c) {
    cout << "Konstruktor Trojkata(" << a <<"," << b << "," << c << ")" << endl;
}
double Trojkat::GetA() const {
    return a;
}
double Trojkat::GetB() const {
    return b;
}
double Trojkat::GetC() const {
    return b;
}
void Trojkat::SetA(double a) {
    this->a = a;
}
void Trojkat::SetB(double b) {
    this->b = b;
}
void Trojkat::SetC(double c) {
    this->c = c;
}
double Trojkat::Obwod() {
    return a+b+c;
}
double Trojkat::Pole() {
    double obw = Obwod()/2;
    return sqrt(obw*(obw - a)*(obw - b)*(obw - c));
}
void Trojkat::Wypisz(std::ostream& out) const {
    out << "Trojkat o bokach: " << a << " i " << b << "i" << c << endl;
}
Trojkat::~Trojkat() {
    cout << "Destruktor Trojkata(" << a << "," << b << "," << c << ")" << endl;
}

#include "Kolo.h"
#include "Stozek.h"
#include <iostream>
#include <cmath>

const double pi = 3.14159265358979323846;

using namespace std;

Stozek::Stozek(double r, double h) : r(r), h(h) {
    cout << "Konstruktor Stozka(" << r <<"," << h << ")" << endl;
}
double Stozek::Tworzaca() const {
    return sqrt(r*r + h*h);
}
double Stozek::PoleBoczne() {
    double l = Tworzaca();
    return pi*l*r;
}
double Stozek::Pole() {
    Kolo kolo(this->r);
    double podst = kolo.Pole();
    double boczne = PoleBoczne();
    return  podst + boczne;
}
void Stozek::Wypisz(std::ostream& out) const {
    out << "Stozek o bokach: " << r << " i " << h << endl;
}

Stozek::~Stozek() {
    cout << "Destruktor Stozka(" << r << "," << h << ")" << endl;
}

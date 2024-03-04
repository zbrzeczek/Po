
#include "Kolo.h"
#include <iostream>

const double pi = 3.14159265358979323846;

using namespace std;

Kolo::Kolo(double r) : r(r){
    cout << "Konstruktor Kola(" << r <<")" << endl;
}
double Kolo::GetR() const {
    return r;
}
void Kolo::SetR(double r) {
    this->r = r;
}
double Kolo::Obwod() {
    return 2*pi*r;
}
double Kolo::Pole() {
    return  pi*r*r;
}
void Kolo::Wypisz(std::ostream& out) const {
    out << "Kolo o bokach: " << r <<  endl;
}

Kolo::~Kolo(){
    cout << "Destruktor Kola(" << r << ",)" << endl;
}

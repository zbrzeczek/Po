#include "prostokat.h"
#include "trojkat.h"

using namespace std;

std::ostream& operator<<(std::ostream& os, const FiguraPlaska& figura) {
    figura.Wypisz(os);
    return os;
}

Prostokat::Prostokat(double a, double b) : a(a), b(b) {
    cout << "Konstruktor Prostokata(" << a <<"," << b << ")" << endl;
}
double Prostokat::GetA() const {
    return a;
}
double Prostokat::GetB() const {
    return b;
}
void Prostokat::SetA(double a) {
    this->a = a;
}
void Prostokat::SetB(double b) {
    this->b = b;
}
double Prostokat::Obwod() {
    return 2 * (a + b);
}
double Prostokat::Pole() {
    return a*b;
}
void Prostokat::Wypisz(std::ostream& out) const {
    out << "Prostokat o bokach: " << a << " i " << b << endl;
}
Prostokat::~Prostokat() {
    cout << "Destruktor Prostokata(" << a << "," << b << ")" << endl;
}



int main() {
    Prostokat prostokat(1.3, 4.5);

    cout << prostokat << endl;
    std::cout << "Obwod prostokata: " << prostokat.Obwod() << std::endl;
    std::cout << "Pole prostokata: " << prostokat.Pole() << std::endl;

    return 0;
}
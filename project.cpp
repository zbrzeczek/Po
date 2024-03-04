#include "prostokat.h"
#include "kolo.h"
#include "Stozek.h"
#include <iostream>

using namespace std;

int main() {
    Prostokat prostokat(1.3, 4.5);

    cout << prostokat << endl;
    std::cout << "Obwod prostokata: " << prostokat.Obwod() << std::endl;
    std::cout << "Pole prostokata: " << prostokat.Pole() << std::endl;

    Stozek stozek(3, 5);
    std::cout << "Tworzaca" << stozek.Tworzaca() << std::endl;
    std::cout << "Pboczne" << stozek.PoleBoczne() << std::endl;
    std::cout << "Pole" << stozek.Pole() << std::endl;
    std::cout << stozek;
    return 0;
}
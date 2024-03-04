#include <iostream>

#ifndef PROJECT_BRYLA_H
#define PROJECT_BRYLA_H


class Bryla {
protected:
    virtual void Wypisz(std::ostream& out) const = 0;
    friend std::ostream& operator<<(std::ostream& os, const Bryla& bryla);
public:
    virtual double PoleBoczne() = 0;
    virtual double Pole() = 0;
    virtual ~Bryla();
};


#endif //PROJECT_BRYLA_H

#include "Bryla.h"

#ifndef PROJECT_STOZEK_H
#define PROJECT_STOZEK_H

class Stozek : public Bryla {
private:
    double r,h;
protected:
    void Wypisz(std::ostream& out) const override;
public:
    Stozek(double r, double h);
    double Tworzaca() const;

    double PoleBoczne() override;
    double Pole() override;

    ~Stozek() override;
};

#endif //PROJECT_STOZEK_H

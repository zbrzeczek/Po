#include "FiguraPlaska.h"

#ifndef PROJECT_KOLO_H
#define PROJECT_KOLO_H

class Kolo : public FiguraPlaska {
private:
    double r;
protected:
    void Wypisz(std::ostream& out) const override;
public:
    Kolo(double r);
    double GetR() const;
    void SetR(double r);
    double Obwod() override;
    double Pole() override;

    ~Kolo() override;
};

#endif //PROJECT_KOLO_H

#include "FiguraPlaska.h"

class Trojkat : public FiguraPlaska {
    double a, b, c;
    protected:
        void Wypisz(std::ostream& out) const override;
    public:
        Trojkat(double a, double b, double c);

        double GetA() const;
        void SetA(double a);
        double GetB() const;
        void SetB(double b);
        double GetC() const;
        void SetC(double c);

        double Obwod() override;
        double Pole() override;

        ~Trojkat() override;
    private:

};

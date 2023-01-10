#include "catch.hpp"

//Zad 2
class Makaron
{
    virtual double ileMaki(unsigned) const
    {
        return 0;
    }
};

class Tagiatelle : public Makaron
{
private:
    double L;
    double W;
    double R;
    static const double C;
public:
    Tagiatelle(): L{0.5}, W{0.5}, R{0.5} {}
    Tagiatelle(double a, double b, double c) : L{a}, W{b}, R{c} {}

    double ileMaki(unsigned P) const
    {
        return (P * L * W * (1.0 - R) * C);
    }
};


// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)

// Zad1
// tutaj definicja klasy Tagliatelle

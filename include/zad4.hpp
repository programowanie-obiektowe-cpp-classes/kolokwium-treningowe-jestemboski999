#include "zad1.hpp"

#include <vector>

double obliczMake(const std::vector< Tagliatelle >& v)
{
    double      M = 0.;
    int  i = 1;
    for (auto it = v.crbegin(); it != v.crend(); ++it)
        M += it->ileMaki(i++);
    if (M > 100.)
        throw 1;
    if (M > 50.)
        throw 1.;
    return M;
}

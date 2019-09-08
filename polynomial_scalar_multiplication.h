#ifndef SCALAR_MULT_H
#define SCALAR_MULT_H

#include <list>

#include "polynomial_part.h"

using namespace std;


class Polynomial_scalar_multiplication {
private:
    list<Polynomial_part> internal_scalar_multiply(list<Polynomial_part> list1, double scalar);
public:
    Polynomial_scalar_multiplication() {};
    list<Polynomial_part> operate(list<Polynomial_part> list1, double scalar);
};
#endif // SCALAR_MULT_H

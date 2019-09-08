#ifndef MULT_H
#define MULT_H

#include <list>

#include "polynomial_part.h"
#include "ordering.h"

using namespace std;

class Polynomial_multiplication: virtual Ordering {
private:
    list<Polynomial_part> internal_multiply(list<Polynomial_part> list1, list<Polynomial_part> list2);
public:
    Polynomial_multiplication(){};
    list<Polynomial_part> operate (list<Polynomial_part> list1, list<Polynomial_part> list2);
};
#endif // MULT_H


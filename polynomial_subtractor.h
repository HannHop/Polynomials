#ifndef SUBTR_H
#define SUBTR_H

#include <iostream>
#include <list>
#include <cmath>

#include "polynomial_part.h"
#include "ordering.h"
#include "operations.h"

class Polynomial_subtractor: virtual Operations, virtual Ordering {
protected:
    list<Polynomial_part> internal_subtract (list<Polynomial_part> first_polynomial, list<Polynomial_part> second_polynomial);
public:
      Polynomial_subtractor() {};
      list<Polynomial_part> operate(list<Polynomial_part> list1, list<Polynomial_part> list2);
};
#endif // SUBTR_H

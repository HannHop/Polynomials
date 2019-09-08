#ifndef ADDER_H
#define ADDER_H

#include <iostream>
#include <list>

#include "polynomial_part.h"
#include "polynomial_adder.h"
#include "operations.h"
#include "ordering.h"

class Polynomial_adder: virtual Operations, virtual Ordering {
protected:
    list<Polynomial_part> internal_add (list<Polynomial_part> first_polynomial, list<Polynomial_part> second_polynomial);
public:
    Polynomial_adder() {};
  	list<Polynomial_part> operate(list<Polynomial_part> list1, list<Polynomial_part> list2);
};
#endif // ADDER_H

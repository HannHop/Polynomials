#ifndef OPERATIONS_H
#define OPERATIONS_H
#include <list>
#include "polynomial_part.h"

using namespace std;

class Operations {
public:
  	Operations(){};

  	virtual list<Polynomial_part> operate(list<Polynomial_part> list1, list<Polynomial_part> list2)=0;
};

#endif // OPERATIONS_H

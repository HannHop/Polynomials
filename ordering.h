#ifndef ORDERING_H
#define ORDERING_H

#include <iostream>
#include <regex>
#include <list>

using namespace std;

class Ordering{
private:
    list<Polynomial_part> internal_order(list<Polynomial_part> not_ordered_list);
public:
    Ordering(){};
    virtual list<Polynomial_part> order(list<Polynomial_part> not_ordered);
};
#endif // ORDERING_H

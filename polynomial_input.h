#ifndef POLYNOM_INPUT_H
#define POLYNOM_INPUT_H

#include <list>
#include "polynomial_part.h"

using namespace std;

class Polynomial_input {
private:
    list<Polynomial_part> polynomial;
public:
    Polynomial_input() {};

    void get_input();
    list<Polynomial_part> get_polynomial();


    void print();
};
#endif // POLYNOM_INPUT_H

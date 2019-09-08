#include <iostream>

#include "polynomial_part.h"

using namespace std;

int Polynomial_part::get_power(){
    return this->power;
}

double Polynomial_part::get_coeff(){
    return this->coefficient;
}

void Polynomial_part::set_coeff(double var){
    this->coefficient=var;
}

void Polynomial_part::print() {
    if (this->power == 0) {
        cout << this->coefficient;
        return;
    }

    cout << this->coefficient << "x^" << this->power;
}

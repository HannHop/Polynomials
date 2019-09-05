#include "polynomial_part.h"
#include <iostream>

using namespace std;

class Polynomial_part{
private:
    double coefficient;
    int power;
public:
    Polynomial_part(double c, int p){
        coefficient = c;
        power = p;
    };

    int get_power(){
        return this->power;
    }

    double get_coeff(){
        return this->coefficient;
    }

    void set_coeff(double var){
        this->coefficient=var;
    }

    void print() {
        if (this->power == 0) {
            cout << this->coefficient;
            return;
        }

        cout << this->coefficient << "x^" << this->power;
    }
};

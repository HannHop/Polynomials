#include <iostream>
#include <list>
#include <cmath>
#include <windows.h>

#include "polynomial_part.h"
#include "operations.h"

class Polynomial_scalar_multiplication {
private:
    list<Polynomial_part> internal_scalar_multiply(list<Polynomial_part> list1, double scalar){
        list<Polynomial_part> result_list;
        for(list<Polynomial_part>::iterator i = list1.begin(); i!=list1.end(); i++){
            Polynomial_part new_polynom_part((*i).get_coeff()*scalar,(*i).get_power());
            result_list.push_back(new_polynom_part);
        }
        return result_list;
    }
public:
    Polynomial_scalar_multiplication() {};
    list<Polynomial_part> operate(list<Polynomial_part> list1, double scalar){
        list<Polynomial_part> res = this->internal_scalar_multiply(list1, scalar);
        return res;
    }
};

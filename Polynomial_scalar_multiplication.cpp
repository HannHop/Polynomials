#include <iostream>
#include <list>
#include <cmath>

#include "polynomial_scalar_multiplication.h"
#include "polynomial_part.h"
#include "operations.h"


list<Polynomial_part> Polynomial_scalar_multiplication::internal_scalar_multiply(list<Polynomial_part> list1, double scalar){
    list<Polynomial_part> result_list;
    for(list<Polynomial_part>::iterator i = list1.begin(); i!=list1.end(); i++){
        Polynomial_part new_polynom_part((*i).get_coeff()*scalar,(*i).get_power());
        result_list.push_back(new_polynom_part);
    }
    return result_list;
}


list<Polynomial_part> Polynomial_scalar_multiplication::operate(list<Polynomial_part> list1, double scalar){
    list<Polynomial_part> res = this->internal_scalar_multiply(list1, scalar);
    return res;
}

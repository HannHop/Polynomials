#include <list>

#include "polynomial_multiplication.h"
#include "polynomial_part.h"
#include "ordering.h"

using namespace std;

list<Polynomial_part> Polynomial_multiplication::internal_multiply(list<Polynomial_part> list1, list<Polynomial_part> list2){
    list<Polynomial_part> result_list;
    for(list<Polynomial_part>::iterator i = list1.begin(); i!=list1.end(); i++){
        for(list<Polynomial_part>::iterator j = list2.begin(); j!=list2.end(); j++){
            Polynomial_part new_polynom_part((*i).get_coeff()*(*j).get_coeff(),(*i).get_power()+(*j).get_power());
            result_list.push_back(new_polynom_part);
        }
    }
    return result_list;
}

list<Polynomial_part> Polynomial_multiplication::operate (list<Polynomial_part> list1, list<Polynomial_part> list2){
    list<Polynomial_part> res = this->internal_multiply(list1, list2);
    return order(res);
}

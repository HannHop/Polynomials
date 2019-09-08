#include <iostream>
#include <list>
#include <cmath>
#include <string>

#include "polynomial_adder.h"
#include "polynomial_part.h"
#include "operations.h"
#include "ordering.h"

using namespace std;

list<Polynomial_part> Polynomial_adder::internal_add (list<Polynomial_part> first_polynomial, list<Polynomial_part> second_polynomial) {
    list<Polynomial_part> result_list;
    for(list<Polynomial_part>::iterator i = first_polynomial.begin(); i!=first_polynomial.end();i++){
            int a = result_list.size();
            for(list<Polynomial_part>::iterator j = second_polynomial.begin(); j!=second_polynomial.end();j++){
                if ((*i).get_power() == (*j).get_power()) {
                        Polynomial_part new_polynom_part((*i).get_coeff()+(*j).get_coeff(),(*i).get_power());
                        result_list.push_back(new_polynom_part);

                        }
            }
        if (a == result_list.size()) {
        Polynomial_part new_polynom_part((*i).get_coeff(),(*i).get_power());
        result_list.push_back(new_polynom_part);
        }
    }
    bool flag = 1;
    for(list<Polynomial_part>::iterator i = second_polynomial.begin(); i!=second_polynomial.end();i++){

            for(list<Polynomial_part>::iterator j = result_list.begin(); j!=result_list.end();j++){
                if ((*i).get_power() == (*j).get_power()) {
                flag = 0;
                break;
                    }
            }
        if (flag == 1) {
                Polynomial_part new_polynom_part((*i).get_coeff(),(*i).get_power());
                result_list.push_back(new_polynom_part);
        }
        flag = 1;
    }

    return result_list;
}

list<Polynomial_part> Polynomial_adder::operate(list<Polynomial_part> list1, list<Polynomial_part> list2) {
    list<Polynomial_part> res = this->internal_add(list1, list2);
    return order(res);
};

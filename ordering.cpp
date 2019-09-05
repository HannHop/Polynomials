#include <iostream>
#include <regex>
#include <list>
#include "ordering.h"

using namespace std;

class Ordering{
private:


    list<Polynomial_part> internal_order(list<Polynomial_part> not_ordered_list){
        int coeff_sum = 0;
        for(list<Polynomial_part>::iterator i = not_ordered_list.begin(); i!=not_ordered_list.end(); i++) {
            coeff_sum = 0;

            for (list<Polynomial_part>::iterator j = not_ordered_list.begin(); j!=not_ordered_list.end(); j++){
                if((*i).get_power() == (*j).get_power()){
                    coeff_sum=coeff_sum+(*j).get_coeff();
                    (*j).set_coeff(0);
                }
            }

            (*i).set_coeff(coeff_sum);
        }
        list<Polynomial_part> result_list = not_ordered_list;
        result_list.remove_if(should_remove);
        result_list.sort(compare);


    return result_list;
    }
public:
    Ordering(){};
    virtual list<Polynomial_part> order(list<Polynomial_part> not_ordered){
        list<Polynomial_part> res = this->internal_order(not_ordered);
        return res;
    }
};

#include <list>
#include <iostream>
#include <regex>
#include <string>

#include "polynomial_part.h"
#include "polynomial_input.h"

using namespace std;

list<Polynomial_part> parse_input(string input) {
    regex parts_regex("\\-?(?:\\d+x?|x)(?:\\^\\-?\\d+)?");
    auto expression_begin = sregex_iterator(input.begin(), input.end(), parts_regex);
    auto expression_end = sregex_iterator();

    list<Polynomial_part> parts;

    for (sregex_iterator i = expression_begin; i != expression_end; ++i) {
        string expression = (*i).str();
        bool is_constant = expression.find("x") == string::npos;

        regex inner_parts_regex("(\\-?\\d+|\\-|^)(\\-?\\d*)");
        auto number_begin = sregex_iterator(expression.begin(), expression.end(), inner_parts_regex);
        auto number_end = sregex_iterator();

        for (sregex_iterator i = number_begin; i != number_end; ++i) {
            double coeff;
            //double coeff = (*i).str() == "-" ? -1 : stod((*i).str());
            if ((*i).str() == "-") coeff = -1;
            else if ((*i).str() == "") coeff = 1;
            else coeff = stod((*i).str());

            if (!is_constant) ++i;
            int parsed_power = i == number_end
                ? 1
                : stoi((*i).str());

            int power = is_constant ? 0 : parsed_power;
            // cout << "c -> " << coeff << " power -> " << power << " const: " << is_constant << endl;

            Polynomial_part polynom_into_list(coeff,power);
            parts.push_back(polynom_into_list);

            if (i == number_end) break;
        }
    }

    return parts;
}

void Polynomial_input::get_input() {
    int max_power=0;
        string input;
        cin>>input;

        list<Polynomial_part> list_unsorted = parse_input(input);
        for (list<Polynomial_part>::iterator i = list_unsorted.begin(); i!=list_unsorted.end();i++){
            if (max_power<(*i).get_power()) max_power = (*i).get_power();
        }

        this->polynomial = list_unsorted;
}

list<Polynomial_part> Polynomial_input::get_polynomial()
 {
     return this->polynomial;
 }

 void Polynomial_input::print() {
        for (list<Polynomial_part>::iterator i = this->polynomial.begin(); i!=this->polynomial.end();i++){
            (*i).print();
        }

        cout << endl;
 }

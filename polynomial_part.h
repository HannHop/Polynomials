#ifndef PART_H
#define PART_H

class Polynomial_part{
private:
    double coefficient;
    int power;
public:
    Polynomial_part(double c, int p){
        coefficient = c;
        power = p;
    };

    int get_power();

    double get_coeff();

    void set_coeff(double var);

    void print();
};
 #endif //PART_H

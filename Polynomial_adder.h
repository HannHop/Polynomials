
class Polynomial_adder: virtual Operations, virtual Ordering {
protected:
    list<Polynomial_part> internal_add (list<Polynomial_part> first_polynomial, list<Polynomial_part> second_polynomial) {}
public:
    Polynomial_adder() {};
  	list<Polynomial_part> operate(list<Polynomial_part> list1, list<Polynomial_part> list2) {
        };
};

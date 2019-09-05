
class Polynomial_subtractor: virtual Operations, virtual Ordering {
protected:
    list<Polynomial_part> internal_subtract (list<Polynomial_part> first_polynomial, list<Polynomial_part> second_polynomial) {}
public:
      Polynomial_subtractor() {};
      list<Polynomial_part> operate(list<Polynomial_part> list1, list<Polynomial_part> list2){}
};

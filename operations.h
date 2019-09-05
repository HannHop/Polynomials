
class Operations{
public:
  	Operations(){};

  	virtual list<Polynomial_part> operate(list<Polynomial_part> list1, list<Polynomial_part> list2) {};
  	virtual list<Polynomial_part> operate(list<Polynomial_part> list1, double liczba) {};
};

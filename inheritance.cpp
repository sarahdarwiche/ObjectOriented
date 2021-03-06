// Sarah Darwiche, 5/27/2013
#include <iostream>
using namespace std;

class Base {
protected:
  int i, j;
public:
  void set(int a, int b) { 
     i = a; 
     j = b; 
  }
  void print() { 
     cout << "i is: " << i << " and j is:  " << j << endl; 
  }
};


class Derived1 : public Base {
  int k;
public:
  void setk() { 
     k = i*j; 
  } 
  void printk() { 
     cout << "k is = " << k << endl; 
  }
};


class Derived2 : public Derived1 {
  int m;              // i and j inherited indirectly through Derived1.
public:
  void setm() { 
     m = i+j; 
  }
  void printm() { 
     cout << "m is = " << m << endl; 
  }
};

int main()
{
  Derived1 A;
  Derived2 B;

/*
Invoke functions here to determine output
*/

A.Base::set(3,4);
A.Base::print();

A.printk();

B.Base::set(3,4);
B.Base::print();

B.Derived1::setk();
B.Derived1::printk();

B.setm();
B.printm();

  return 0;
}

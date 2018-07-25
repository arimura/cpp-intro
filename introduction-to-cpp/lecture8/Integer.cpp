#include <iostream>
using namespace std;

class Integer {
public:
  int val;
  Integer(int val){
    this->val = val; cout << "constructor with " << val << endl;
  }
};
class IntegerWrapper {
public:
  Integer val;
  IntegerWrapper(int v) : val(v) {
    cout << "IntegerWrapper default constructor" << endl;
  }
};

int main(){
  Integer i(3);
  Integer j = 5;
  Integer a[] = {Integer(2), Integer(5)};
}

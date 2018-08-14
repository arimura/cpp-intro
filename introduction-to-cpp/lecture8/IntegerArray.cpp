#include <iostream>
using namespace std;

class IntegerArray {
public:
  int *data;
  int size;
  IntegerArray(int size){
    data = new int[size];
    this->size = size;
  }

  IntegerArray(IntegerArray &o){
    data = new int[o.size];
    size = o.size;
    for(int i =0; i < size; ++i){
      data[i] = o.data[i];
    }
  }
  
  ~IntegerArray(){
    delete[] data;
  }
};

int main(){
  IntegerArray arr(2);
  arr.data[0] = 4;
  arr.data[1] = 5;
  if(true){
    IntegerArray b = arr;
  }
  cout << arr.data[0] << endl;
}

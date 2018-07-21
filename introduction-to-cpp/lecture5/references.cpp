#include <iostream>

void swap(int& first, int& second){
  int temp = first;
  first = second;
  second = temp;
}

int main(){
  int x;
  int &foo = x;
  foo = 56;
  std::cout << x << std::endl;

  int a = 2;
  int b = 3;
  swap(a,b);
  std::cout << a << "," << b << std::endl;
}

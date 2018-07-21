#include "vector.h"
#include <iostream>
using namespace std;

void Point::offset(double offsetX, double offsetY) {
  x += offsetX; y += offsetY;
}

void Point::print(){
  cout << "(" << x << "," << y << ")";
}

void Vector::offset(double offsetX, double offsetY) {
  start.offset(offsetX, offsetY);
  end.offset(offsetX, offsetY);  
}

void Vector::print(){
  start.print();
  cout << " -> ";
  end.print();
  cout << endl;
}

int main(){
  Vector vec;
  vec.start.x = 1.2;
  vec.end.x = 2.0;
  vec.start.y = 0.4;
  vec.end.y = 1.6;
  vec.print();
}
  

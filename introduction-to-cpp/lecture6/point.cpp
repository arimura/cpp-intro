#include <iostream>
using namespace std;

class Point {
public:
  double x, y;
  Point(double nx, double ny) {
    x = nx;
    y = ny;
    cout << "2-parameter constructor" << endl;
  }

  Point(Point &o) {
    x = o.x;
    y = o.y;
    cout << "custom copy constrocutor" << endl;
  }
};

int main(){
  Point q(1.0, 2.0);
  Point r = q;
}

  

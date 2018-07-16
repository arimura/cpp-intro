#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

float randWithOne(){
  return (rand() % 101) / (float)100;
}


int main() {
  srand(time(0));

  float x = randWithOne();
  float y = randWithOne();
  cout << "x: " << x << ", y: " << y << endl;

  return 0;
}

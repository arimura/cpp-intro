#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

float randWithOne(){
  return (rand() % 100) / (float)100;
}

int countDartWithinCircle(int tryCnt){
  int cnt = 0;
  for(int i=0; i < tryCnt; i++){
    float x = randWithOne();
    float y = randWithOne();
    //cout << "x: " << x << ", y: " << y << endl;

    //check dart is within circle
    float d =  sqrt(pow(x,2) + pow(y,2));
    //cout << "d: " << d << endl;

    if(d <= 1) cnt++;
  }
  return cnt;
}

int main() {
  srand(time(0));

  int tryCnt = 5000000;
  int dartCnt = countDartWithinCircle(tryCnt);
  cout << "try: " << tryCnt << ", inside: " << dartCnt << endl;

  float pi = dartCnt / (float)tryCnt * 4.;
  cout << "pi is " << pi;
  return 0;
}


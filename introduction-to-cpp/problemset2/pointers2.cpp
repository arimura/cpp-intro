#include <iostream>
using namespace std;

int main(){
  char *oddOrEven = (char*)"Never odd or even";
  char *nthCharPtr = &oddOrEven[5];
  cout << nthCharPtr << endl;

  nthCharPtr -= (sizeof(char)) * 2;
  cout << nthCharPtr << endl;

  char **pointerPtr = &nthCharPtr;
  cout << **pointerPtr << endl;
  
}

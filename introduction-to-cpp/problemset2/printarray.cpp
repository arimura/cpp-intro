#include <iostream>
using namespace std;

void printArray(int size, int array[]){
  for(int i = 0;i < size; i++){
    cout << array[i];
    if(i != size -1)
      cout << ", ";
  }
}

int main(){
  int array[] = {1, 3, 5, 7};
  int size = sizeof(array) / sizeof(*array);
  printArray(size, array);
  return 0;
}

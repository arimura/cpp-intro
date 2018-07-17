#include <iostream>
using namespace std;

void printArray(int size, int array[]){
  for(int i = 0;i < size; i++){
    cout << array[i];
    if(i != size -1)
      cout << ", ";
  }
}

void reverse(int size, int array[]){
  for(int i = 0;i < size / 2; i++){
    int tmp = array[i];
    array[i] = array[(size-1-i)];
    array[(size-1-i)] = tmp;
  }
}

int main(){
  int array[] = {1, 3, 5, 7, 9};
  int size = sizeof(array) / sizeof(*array);
  reverse(size, array);
  printArray(size, array);
  return 0;
}

#include <iostream>
using namespace std;

#define WIDTH 3
#define LENGTH 2

void printArray(int size, int array[]){
  for(int i = 0;i < size; i++){
    cout << array[i];
    if(i != size -1)
      cout << ", ";
  }
  cout << endl;
}

void printNestedArray(int size1, int size2, int *array[]){
  printArray(size2, array[0]);
}

void reverse(int size, int array[]){
  for(int i = 0;i < size / 2; i++){
    int tmp = array[i];
    array[i] = array[(size-1-i)];
    array[(size-1-i)] = tmp;
  }
}

void transpose(const int input[][LENGTH], int output[][WIDTH]){
  for(int widx=0;widx < WIDTH; widx++){
    for(int lidx=0; lidx < LENGTH; lidx++){
      output[lidx][widx] = input[widx][lidx];
    }
  }
}

int main(){
  int array[][LENGTH]= {{1,2}, {3,4}, {5,6}};
  int outarray[][WIDTH] = {{-1,-1,-1},{-1,-1,-1}};

  for(int i=0;i<WIDTH; i++){
     printArray(sizeof(array[i]) / sizeof(*array[i]), array[i]);
  };
  
  transpose(array, outarray);
  
  for(int i=0;i<LENGTH; i++){
     printArray(sizeof(outarray[i]) / sizeof(*outarray[i]), outarray[i]);
  };
   
  return 0;
}

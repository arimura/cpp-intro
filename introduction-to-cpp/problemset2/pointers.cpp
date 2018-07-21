#include <iostream>
using namespace std;

int length(char *str){
  bool isEnd = false;
  int len = 0;
  while(!isEnd){
    isEnd = *str == '\0';
    if(!isEnd){
      len++;
      str += sizeof(char);
    }
  }
  return len;
}

int length2(const char *str){
  int length = 0;
  while(*(str + length) != '\0'){
    ++length;
  }
  return length;
}

void swap(int *l, int *r){
  int *t;
   *t = *l;
   *l = *r;
   *r = *t;
}

void swap_pointer(int **x, int **y){
  int *tmp = *x;
  *x = *y;
  *y = tmp;
}

int main(){
  char *hoge = (char*)"hoge";
  cout << length(hoge) << endl;
  int t1 = 1;
  int t2 = 3;
  swap(&t1, &t2);
  cout << t1 << ", " << t2 << endl;

  //swap pointers
  int x =5, y=6;
  int *ptr1 = &x, *ptr2 = &y;
  swap_pointer(&ptr1, &ptr2);
  cout << *ptr1 << ',' << *ptr2 << endl;
}

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

void swap(int *l, int *r){
  int *t;
   *t = *l;
   *l = *r;
   *r = *t;
}

int main(){
  char *hoge = (char*)"hoge";
  cout << length(hoge) << endl;
  int t1 = 1;
  int t2 = 3;
  swap(&t1, &t2);
  cout << t1 << ", " << t2 << endl;
}

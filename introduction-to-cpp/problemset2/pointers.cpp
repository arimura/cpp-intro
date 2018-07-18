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

int main(){
  cout << length("hoge");
}

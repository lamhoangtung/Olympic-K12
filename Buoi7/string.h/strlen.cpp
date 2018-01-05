#include <iostream>

using namespace std;

int strlen(char a[]){
  int i=0;
  while (a[i]!='\0'){
    i++;
  }
  return i;
}

int main(void){
  char a[1000];
  cin >> a;
  cout << strlen(a) << '\n';
}

#include <iostream>

using namespace std;

void strlwr(char a[]){
  int i;
  for (i=0;a[i]!='\0';i++){
    if (a[i]>=0x41&&a[i]<=0x5A) a[i]|= 0x20;
  }
}

int main(void){
  char a[1000];
  cin >> a;
  strlwr(a);
  cout << a << '\n';
}

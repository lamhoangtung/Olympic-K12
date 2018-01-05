#include <iostream>

using namespace std;

void strcpy(char b[],char a[]){
  int i=0;
  while (a[i]!='\0'){
    b[i]=a[i];
    i++;
  }
  b[i]='\0';
}

int main(void){
  char a[1000],b[1000];
  cin >> a;
  strcpy(b,a);
  cout << b << '\n';
}

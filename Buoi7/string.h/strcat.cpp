#include <iostream>

using namespace std;

void strcat(char a[],char b[]){
  int i,j;
  for (i=0;a[i]!='\0';i++);
  for (j=0;b[j]!='\0';j++) a[i+j]=b[j];
  a[i+j]='\0';
}

int main(void){
  char a[1000],b[1000];
  cin >> a;
  cin >> b;
  strcat(a,b);
  cout << a << '\n';
}

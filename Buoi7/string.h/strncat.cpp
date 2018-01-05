#include <iostream>

using namespace std;

void strcat(char a[],char b[],int n){
  int i,j;
  for (i=0;a[i]!='\0';i++);
  for (j=0;j<n;j++) a[i+j]=b[j];
  a[i+j]='\0';
}

int main(void){
  int n;
  char a[1000],b[1000];
  cin >> a;
  cin >> b;
  cin >> n;
  strcat(a,b,n);
  cout << a << '\n';
}

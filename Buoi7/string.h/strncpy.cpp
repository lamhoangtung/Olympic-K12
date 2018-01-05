#include <iostream>

using namespace std;

void strncpy(char b[],char a[],int n){
  for (int i=0;i<n;i++){
    b[i]=a[i];
  }
}

int main(void){
  char a[1000],b[1000];
  int n;
  cin >> a;
  cin >> b;
  cin >>n;
  strncpy(b,a,n);
  cout << b << '\n';
}

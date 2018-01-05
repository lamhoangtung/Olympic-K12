#include <iostream>

using namespace std;

string substr(string a,int i,int n){
  char b[n+1];
  int x=0;
  for (int j=i;j<i+n;j++){
    b[x]=a[j];
    x++;
  }
  b[n]='\0';
  return b;
}

int main(void){
  string a;
  int i,n;
  cin >> a;
  cin >> i;
  cin >> n;
  cout << substr(a,i,n) << "\n";
}

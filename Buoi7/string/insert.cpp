#include <iostream>

using namespace std;

string insert(string a,int i, string b){
  int j,n=0,k=0,m=0;
  char c[1000];
  n=a.size();
  m=b.size();
  for (j=i;j<=n;j++){
    c[k]=a[j];
    k++;
  }
  return a+b+c;
}

int main(void){
  string a,b;
  int i;
  cin >> a;
  cin >> b;
  cin >> i;
  cout << insert(a,i,b) << '\n';
}

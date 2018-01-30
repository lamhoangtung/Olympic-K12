#include <iostream>

using namespace std;

int main(void){
  long long n,x,i,k,dem=0;
  string s;
  cin >> n >> x;
  n=n%6;
  if (n==0) s="012";
  else if (n==1) s="102";
  else if (n==2) s="120";
  else if (n==3) s="210";
  else if (n==4) s="201";
  else s="021";
  cout << s[x];
}

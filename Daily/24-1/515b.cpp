#include <iostream>

using namespace std;

int UCLN(int a, int b){
  while (a!=b){
    if (a>b) a=a-b;
    else b=b-a;
  }
  return a;
}

int main(void){
  int i,n,m,a[999],b,g,x,ucln;
  bool ans=true;
  cin >> n >> m >> b;
  ucln=UCLN(m,n);
  for (i=0;i<b;i++){
    cin >> x;
    a[x%ucln]=1;
  }
  cin >> g;
  for (i=0;i<g;i++){
    cin >> x;
    a[x%ucln]=1;
  }
  for(i=0;i<ucln;i++){
    if (a[i]==0){
      ans=false;
      break;
    }
  }
  if (ans==true) cout << "Yes"; else cout << "No";

}

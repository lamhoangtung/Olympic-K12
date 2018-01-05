#include <iostream>
#include <string>

using namespace std;

int main(void){
  string a;
  cin >> a;
  int i,n=a.length(),dem=0;
  for(i=0;i<n;i+=3){
    if (a[i]!='S') dem++;
    if (a[i+1]!='O') dem++;
    if (a[i+2]!='S') dem++;
  }
  cout << dem;
}

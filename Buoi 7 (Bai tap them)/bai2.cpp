#include <iostream>
#include <string>

using namespace std;

int main(void){
  string a;
  cin >> a;
  int i,n=a.length(),dem=1;
  for(i=0;i<n;i++)
    if (a[i]>='A'&&a[i]<='Z') dem++;
  cout << dem;
}

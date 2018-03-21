#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
  int n;
  cin >> n;
  int a[n];
  for (int i=0;i<n;i++) cin >> a[i];
  string s;
  cin >> s;
  int x=-1,l,r;
  for (int i=0;i<n-1;i++){
    if (s[i]=='0'){
      if (x==-1) l=0;
      else l=x+1;
      r=i;
      for (int j=l;j<=r;j++){
        if (a[j]>=l+1 && a[j]<=r+1) continue;
        else {
          cout << "NO";
          return 0;
        }
      }
    x=i;
    }
  }
  cout << "YES";
  return 0;
}

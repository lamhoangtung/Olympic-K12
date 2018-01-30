#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
  int i,n,k;
  cin >> n >> k;
  string s;
  cin >> s;
  map<char,int> m;
  for (i=0;i<n;i++){
    m[s[i]]++;
  }
  for (i=0;i<n;i++){
    if (m[s[i]]>k){
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
  return 0;
}

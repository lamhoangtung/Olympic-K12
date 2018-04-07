#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
  string s,s1;
  cin >> s;
  map <char,int> m;
  for (int i=0;i<s.length();i++){
    char temp=s[i];
    m[temp]++;
    if (m[temp]==1&&temp!='c') s1+=temp;
  }
  if (s1=="abc"){
    if (m['c']==m['b']||m['c']==m['a']) cout << "YES"; else cout << "NO";
    return 0;
  }
  else {
    cout << "NO";
    return 0;
  }
}

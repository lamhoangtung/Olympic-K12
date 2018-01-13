#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void){
  string s;
  int i;
  vector <char> a;
  getline(cin,s);
  for (i=0;i<s.length();i++){
    if (s[i]!=' ') a.push_back(s[i]);
  }
  for (i=1;i<a.size();i++){
    if (a[i]<a[i-1]){
      a.erase(a.begin()+i,a.begin()+i+1);
      i--;
    }
  }
  for (i=0;i<a.size();i++){
     cout << a[i] << " ";
   }
}

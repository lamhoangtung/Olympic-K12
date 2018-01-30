#include <iostream>
#include <string>

using namespace std;

int main(void){
  int n;
  cin >> n;
  string s;
  cin >> s;
  string ans="YES";
  int i=0,j=0;
  for (int k=0;k<n/2;k++){
    if (s[k]!='4'&&s[k]!='7'){
      ans="NO";
      break;
    }
    if (s[n/2+k]!='4'&&s[n/2+k]!='7'){
      ans="NO";
      break;
    }
    i+=s[k]-'0';
    j+=s[n/2+k]-'0';
  }
  if(i!=j) ans="NO";
  cout << ans;
}

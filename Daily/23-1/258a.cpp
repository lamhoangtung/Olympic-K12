#include <iostream>

using namespace std;

int main(void){
  string s;
  cin >> s;
  int vt=0;
  for (int i=0;i<s.length();i++){
    if(s[i]=='0'){
      vt=i;
      break;
    }
  }
  for (int i=0;i<s.length();i++){
    if(i!=vt){
      cout << s[i];
    }
  }
}

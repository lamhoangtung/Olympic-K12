#include <iostream>

using namespace std;

int main(void){
  string s;
  cin >> s;
  int temp=0;
  for (int i=0;i<s.length();i++){
    if (s[i]=='0'&&temp==0){
      temp++;
      s.erase(i,1);
      break;
    }
  }
  if (temp==1){
    cout << s;
  }
  else{
    s.erase(1,1);
    cout << s;
  }
}

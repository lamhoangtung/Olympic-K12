#include <iostream>
#include <string>

using namespace std;

int main(void){
  string s;
  cin >> s;
  int low=0,up=0;
  for (int i=0;i<s.length();i++){
    if (islower(s[i])) low++;
    if (isupper(s[i])) up++;
  }
  if (up>low){
    for (int i=0;i<s.length();i++){
      char temp=toupper(s[i]);
      cout << temp;
    }
  }
  else {
    for (int i=0;i<s.length();i++){
      char temp=tolower(s[i]);
      cout << temp;
    }
  }
}

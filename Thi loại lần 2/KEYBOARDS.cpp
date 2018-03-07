#include <iostream>
#include <string>

using namespace std;

int main(void){
  string s1,s2,s;
  cin >> s1 >> s2 >> s;
  for (int i=0;i<s.length();i++){
    if (isdigit(s[i])){
      cout << s[i];
    }
    else {
      if (isupper(s[i])){
        s[i]=tolower(s[i]);
        for (int j=0;j<s1.length();j++){
          if (s[i]==s1[j]){
            char temp=s2[j];
            temp=toupper(temp);
            cout << temp;
          }
        }
      }
      else {
        for (int j=0;j<s1.length();j++){
          if (s[i]==s1[j]) cout << s2[j];
        }
      }
    }
  }
}

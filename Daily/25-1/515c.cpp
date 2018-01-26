#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void){
  int n,i,j;
  cin >> n;
  string s,a;
  cin >> s;
  for (i=0;i<n;i++){
    if (s[i]=='2'||s[i]=='3'||s[i]=='5'||s[i]=='7') a+=s[i];
    else{
      if (s[i]=='4') a+="322";
      if (s[i]=='6') a+="53";
      if (s[i]=='8') a+="7222";
      if (s[i]=='9') a+="7332";
    }
  }
  for (i=0;i<a.length()-1;i++){
    for (j=i+1;j<a.length();j++){
        if (a[i]<a[j]){
            swap(a[i],a[j]);
        }
    }
  }
  cout << a;
}

#include <iostream>
#include <string>

using namespace std;

char lower[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char upper[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

bool checkPangram (string &s){
  int i,j,n=s.length(),dem=0;
  for (j=0;j<26;j++){
    for (i=0;i<n;i++){
      if (lower[j]==s[i]||upper[j]==s[i]){
          dem++;
          break;
      }
    }
  }
  if (dem==26) return true;
    else return false;
}

int main(void)
{
    string s;
    cin >> s;
    if (checkPangram(s) == true) cout << "pangrams";
      else cout << "not pangrams";
}

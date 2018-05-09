#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void){
  int n;
  cin >> n;
  string a;
  getline(cin,a);
  for (int i=0;i<n;i++){
    string s,t="";
    int dem=0,ans=0,len=-1;
    getline(cin,s);
    s+=' ';
    for (string::iterator it=s.begin();it!=s.end();it++){
      if (*it==' '){
        if (t.length()!=0){
          if (t.length()==len) dem++;
          else dem=1;
          len=t.length();
        }
        ans=max(ans,dem);
        t="";
      }
      else t+=*it;
    }
    cout << ans << "\n";
  }
}

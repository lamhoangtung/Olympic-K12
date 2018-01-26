#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void){
  map<string,int> m;
  string a[9999];
  int n,j=0;
  cin >> n;
  for(int i=0;i<n;i++){
    string s1,s2;
    cin >> s1 >> s2;
    m[s1]++;
    if (m[s1]==1){
      j++;
      a[j]=s1+' '+s2;
    }
  }
  for(int i=1;i<=j;i++){
    cout << a[i] << "\n";
  }
}

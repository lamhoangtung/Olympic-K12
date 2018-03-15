#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void){
  map <string,unsigned long long> m;
  map <string,unsigned long long>::iterator it;
  unsigned long long i,n,ans=0;
  cin >> n;
  for (i=0;i<n;i++){
    string temp;
    cin >> temp;
    m[temp]++;
  }
  for (it=m.begin();it!=m.end();it++){
    if ((*it).second<=5) ans+=100;
    if ((*it).second>5) ans+=100+((*it).second-5);
  }
  cout << ans;
}

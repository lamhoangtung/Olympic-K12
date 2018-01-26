#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main(void){
  map<int,int> m1,m2;
  map<int,int>::iterator it;
  int i,n,m,temp,ans=0;
  cin >> n >> m;
  for (i=0;i<n;i++){
    cin >> temp;
    m1[temp]++;
  }
  for (i=0;i<m;i++){
    cin >> temp;
    m2[temp]++;
  }
  if (n>=m){
    for (it=m1.begin();it!=m1.end();it++){
      if (m2[(*it).first]!=0){
        int temp1=(*it).second;
        int temp2=m2[(*it).first];
        ans+=min(temp1,temp2);
      }
    }
  }
  else {
    for (it=m2.begin();it!=m2.end();it++){
      if (m1[(*it).first]!=0) {
        int temp1=(*it).second;
        int temp2=m1[(*it).first];
        ans+=min(temp1,temp2);
      }
    }
  }
  cout << ans << "\n";
}

#include <iostream>
#include <map>

using namespace std;

int main(void){
  map <int,int> m,sl,ans;
  map <int,int>::iterator it;
  int i,n,type,k;
  cin >> n;
  for (i=0;i<n;i++){
    cin >> type;
    if (type==1){
      cin >> k;
      sl[k]++;
      if (sl[k]==1){
        m[k]=i;
      }
    }
    if (type==2){
      if (!m.empty()){
        it=--m.end();
        m.erase(it);
        it=--sl.end();
        sl.erase(it);
      }
    }
    if (type==3){
      if (!m.empty()){
        it=m.begin();
        m.erase(it);
        it=sl.begin();
        sl.erase(it);
      }
    }
  }
  for (it=m.begin();it!=m.end();it++){
    ans[(*it).second]=((*it).first);
  }
  for (it=ans.begin();it!=ans.end();it++){
    cout << (*it).second << " ";
  }
}

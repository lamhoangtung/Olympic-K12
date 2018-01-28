#include <iostream>
#include <map>

using namespace std;

int main(void){
  long long i,n,m,x;
  cin >> n >> x;
  map<long long, long long> mp;
  for (i=0;i<n;i++){
    cin >> m;
    mp[m]++;
  }
  long long cnt = 0,y;
  map<long long,long long>::iterator it=mp.begin();
  while (it!=mp.end()){
    m=x^it->first;
    if (m==it->first){
      y=(it->second-1)*it->second;
    }
    else{
      y=it->second*mp[m];
    }
    cnt+=y;
    it++;
  }
  cout << cnt/2 << "\n";
}

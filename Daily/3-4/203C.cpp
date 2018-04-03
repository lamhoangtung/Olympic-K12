#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
  long long i,j,k,n,m,a,b,w;
  cin >> n >> w;
  cin >> a >> b;
  pair <long long,long long> s[n];
  for (i=0;i<n;i++){
    cin >> j >> k;
    m=(a*j)+(b*k);
    s[i]={m,i+1};
  }
  sort(s,s+n);
  vector <long long> v;
  i=0;
  while (w>0){
    if(w-s[i].first>=0){
      v.push_back(s[i].second);
      w-=s[i].first;
      i++;
    }
    else break;
  }
  cout << v.size() << "\n";
  for (i=0;i<v.size();i++) cout << v[i] << " ";
}

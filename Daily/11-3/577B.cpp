#include <bits/stdc++.h>

using namespace std;

int n,m;
vector <int> a;
set <pair<int,unsigned long long>> b;
unsigned long long sum = 0;

void solve(int i){
  if (i==a.size()){
    if (sum%m==0 && sum>=m){
      cout << "YES";
      exit(0);
    }
    return;
  }

  if (sum%m==0 && sum >=m){
    cout << "YES";
    exit(0);
  }

  if (b.find({i,sum})!=b.end()) return;

  sum+=a[i];
  solve(i+1);
  sum-=a[i];
  solve(i+1);
  b.insert({i,sum});
  return;
}

int main(){
  cin >> n >> m;
  a.resize(n);
  for(int i=0;i<n;i++){
    cin >> a[i];
    if(a[i] == 0){
      cout << "YES";
      return 0;
    }
  }
  solve(0);
  cout << "NO";
  return 0;
}

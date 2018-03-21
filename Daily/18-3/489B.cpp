#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
  int n;
  cin >> n;
  vector<int> boys(n);
  for (int i=0;i<n;i++){
    cin >> boys[i];
  }
  int m;
  cin >> m;
  vector<int> girls(m);
  for (int i=0;i<m;i++){
    cin >> girls[i];
  }
  sort(boys.begin(),boys.end());
  sort(girls.begin(),girls.end());
  int i=0,j=0,ans=0;
  while (i<n && j<m){
    if ((-1<=boys[i]-girls[j]) && (boys[i]-girls[j]<=1)){
      i++;
      j++;
      ans++;
    }
    else if (boys[i] < girls[j]){
      i++;
    }
    else if (girls[j] < boys[i]){
      j++;
    }
  }
  cout << ans;
}

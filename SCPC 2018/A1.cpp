#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int tc;
  cin >> tc;
  for (int t=1;t<=tc;t++){
    int n,k,temp;
    cin >> n >> k;
    vector<int> a;
    vector<int> v;
    for (int i=0;i<n;i++){
      cin >> temp;
      a.push_back(temp);
    }
    sort(a.begin(),a.end());
    int j=0;
    for (int i=0;i<n;i++){
      if (a[i]-v[j]<=k){
        v.push_back(a[i]);
      }
      else j++;
    }
    int ans=v.size()-j;
    cout << "Case #" << t << "\n";
    cout << ans << "\n";
  }
  return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  int n,temp;
  cin >> n;
  vector<int> v;
  for (int i=0;i<n;i++){
    cin >> temp;
    v.push_back(temp);
  }
  int q;
  cin >> q;
  for (int i=0;i<q;i++){
    cin >> temp;
    vector<int>::iterator it = lower_bound(v.begin(), v.end(), temp);
    if (v[it-v.begin()]==temp)
      cout << "YES " << (it-v.begin()+1) << "\n";
    else
      cout << "NO " << (it-v.begin()+1) << "\n";
   }
}

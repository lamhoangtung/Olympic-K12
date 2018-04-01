#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int cmp(string a, string b){
    string ab = a.append(b);
    string ba = b.append(a);
    return ab.compare(ba) > 0 ? 1: 0;
}

int main(void){
  int n;
  cin >> n;
  vector<string> v;
  for (int i=0;i<n;i++){
    int temp1;
    cin >> temp1;
    string temp2=to_string(temp1);
    v.push_back(temp2);
  }
  sort(v.begin(),v.end(),cmp);
  for (int i=0;i<v.size();i++ )
    cout << v[i];
}

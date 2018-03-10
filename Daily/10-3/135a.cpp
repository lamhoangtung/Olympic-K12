#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
  long long n;
  cin >> n;
  vector<long long> v;
  long long max=0,vt=0;
  for (long long i=0;i<n;i++){
    long long temp;
    cin >> temp;
    v.push_back(temp);
    if (temp > max){
      max=temp;
      vt=i;
    }
  }
  if (max==1) v[vt]=2;
    else v[vt]= 1;
  sort(v.begin(),v.end());
  for (long long i=0;i<n;i++){
    cout << v[i] << " ";
  }
}

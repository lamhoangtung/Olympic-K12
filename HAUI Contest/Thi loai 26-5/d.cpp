#include <iostream>

using namespace std;

bool nguyhiem(int n){
  bool ans=false;
  long long tong=0;
  for (int i=1;i<n;i++){
    if (n%i==0) tong+=i;
    if (tong>n){
      ans=true;
      break;
    }
  }
  return ans;
}

int main(void){
  int l,r,dem=0;
  cin >> l >> r;
  for (int i=l;i<=r;i++){
    if (nguyhiem(i)==true){
      //cout << i << " ";
      dem++;
    }
  }
  cout << dem;
}

#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
  int n,a[105],k=0;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  sort(a,a+n);
  for(int i=0;i<n;i++){
    if(k*a[i]+k<=i) k++;
  }
  cout << k;
}

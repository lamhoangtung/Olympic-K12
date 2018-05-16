#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
  int c,n,a[100000];
  cin >> c >> n;
  for (int i=0;i<n;i++){
    cin >> a[i];
  }
  sort(a,a+n);
  int i=n-1;
  int sl=0;
  long long sum=0;
  while (sl<=n&&i>=0&&sum<c){
    if (sum+a[i]<c){
      sum+=a[i];
      i--;
      sl++;
    }
    else i--;
  }
  cout << sum;
}

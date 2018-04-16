#include <iostream>

using namespace std;

int main(void){
  int n,d,a[100005];
  cin >> n >> d;
  for (int i=0;i<n;i++) cin >> a[i];
  int j=0;
  long long ans=0;
  for (int i=0;i<n;i++){
    while (j<=i && a[i]-a[j]>d) j++;
    int k=i-j-1;
    ans+=k*(k+1)/2;
  }
  cout << ans;
}

#include <iostream>

using namespace std;

int main(void){
  int n,t,a[100000],b[100000];
  cin >> n >> t;
  unsigned long long sum=0;
  for (int i=0;i<n;i++){
    cin >> a[i] >> b[i];
    sum+=a[i];
  }
  cout << sum << "\n";
  for (int j=0;j<t;j++){
    sum=0;
    for (int i=0;i<n;i++){
      if (a[i]-b[i]<0) a[i]=0; else a[i]-=b[i];
      sum+=a[i];
    }
    cout << sum << "\n";
  }
}

#include <iostream>

using namespace std;

int main(void){
  unsigned long long n,i,a[21],b[21];
  cin >> n;
	for (i=0;i<n;i++){
		cin >> a[i];
	}
	for (i=0;i<n-1;i++){
    cin >> b[i];
	}
  unsigned long long x=0,j,sum=0,ans=1;
  for (i=0;i<=n;i++){
    if (b[i]==1){
      for (j=x;j<=i;j++){
        sum+=a[j];
      }
      if (sum!=0) ans*=sum;
      sum=0;
      x=i+1;
    }
    if (i==n-1){
      for (j=x;j<n;j++){
        sum+=a[j];
      }
      if (sum!=0) ans*=sum;
      break;
    }
  }
  cout << ans;
}

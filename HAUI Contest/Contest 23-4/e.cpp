#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int findMin(int a[], int n){
  int sum=0;
  for (int i=0;i<n;i++) sum+=a[i];
  int dp[n+1][sum+1];
  for (int i=0;i<=n;i++) dp[i][0]=1;
  for (int i=1;i<=sum;i++) dp[0][i]=0;
  for (int i=1;i<=n;i++){
    for (int j=1;j<=sum;j++){
      dp[i][j]=dp[i-1][j];
      if (a[i-1]<=j) dp[i][j]|=dp[i-1][j-a[i-1]];
    }
  }

  int diff=999999999;
  for (int j=sum/2;j>=0;j--){
    if (dp[n][j] == true){
      diff = sum-2*j;
      break;
    }
  }
  return diff;
}

int main(void){
    int n,a[100001];
    cin >> n;
    for (int i=0;i<n;i++) cin >> a[i];
    n = sizeof(a)/sizeof(a[0]);
    cout << findMin(a, n);
}

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void){
  int i,n,x,sum=0,ans;
  cin >> n >> x;
  for (i=0;i<n;i++){
    int temp;
    cin >> temp;
    sum+=temp;
  }
  sum=abs(sum);
  ans=sum/x;
  if (sum%x!=0) ans++;
  cout << ans;
}

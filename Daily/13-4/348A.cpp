#include <iostream>

using namespace std;

int main(void){
  long long n;
  cin >> n;
  long long sum=0,min=0;
  for (int i=0;i<n;i++){
    long long temp;
    cin >> temp;
    sum+=temp;
    if (temp>min) min=temp;
  }

  long long ans=sum/(n-1);
  if (sum%(n-1)!=0) ans++;
  if (ans<min) ans=min;
  cout << ans << "\n";
}

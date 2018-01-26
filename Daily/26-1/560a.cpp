#include <iostream>

using namespace std;

int main(void){
  int i,n,temp,ans=1;
  cin >> n;
  for (i=0;i<n;i++){
    cin >> temp;
    if (temp==1){
      ans=-1;
      break;
    }
  }
  cout << ans;
}

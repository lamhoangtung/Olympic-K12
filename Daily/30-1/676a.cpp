#include <iostream>

using namespace std;

int main(void){
  int n,k,a,b;
  cin >> n;
  for (int i=1;i<=n;i++){
    cin >> k;
    if (k==1){
      a = i;
    }
    else if (k==n){
      b = i;
    }
  }
  cout << max(max(n-b,b-1),max(n-a,a-1));
}

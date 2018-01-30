#include <iostream>

using namespace std;

int main(void){
  int n,a[9999];
  cin >> n;
  for (int i=0;i<n;i++){
    cin >> a[i];
  }
  if ((n%2==1) && (a[0]%2==1) && (a[n-1]%2==1)) cout << "Yes";
  else cout << "No";
}

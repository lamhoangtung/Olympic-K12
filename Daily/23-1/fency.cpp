#include <iostream>

using namespace std;

int main(void){
  int t,a[180];
  cin >> t;
  for (int i=0;i<t;i++){
    cin >> a[i];
  }
  for (int i=0;i<t;i++){
    if (360%(180-a[i])==0)
      cout << "YES" << "\n";
    else cout << "NO" << "\n";
  }
}

#include <iostream>
using namespace std;

int main(void){
  int i,n,a[99999],duong=0,am=0;
  cin >> n;
  for (i=1;i<=n;i++){
    cin >> a[i];
    if (a[i]>=0) duong+=1; else am+=1;
  }
  cout << duong << "  " << am << "\n";
}

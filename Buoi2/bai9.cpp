#include <iostream>
using namespace std;

int main(void){
  int i,n,max,a[99999];
  cin >> n;
  for (i=1;i<=n;i++){
    cin >> a[i];
  }
  //Tim max
  max=a[1];
  for (i=2;i<=n;i++){
    if (a[i]>max) max=a[i];
  }
  //Tra ve vi tri (Phong truong hop max xuat hien nhieu vi tri khac nhau)
  for (i=1;i<=n;i++){
    if (a[i]==max) cout << i << " ";
  }
  cout << "\n";
}

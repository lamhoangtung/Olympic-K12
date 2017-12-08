#include <iostream>

using namespace std;

int main(void){
  int i,x=0,y=0,chan[99999],le[99999],n,a[99999];
  cout << "Nhap n: ";
  cin >> n;
  for (int i=1;i<=n;i++){
    cout << "Nhap phan tu a[" << i <<"]: ";
    cin >> a[i];
    if (a[i]%2==0) {
      x++;
      chan[x]=a[i];
    }
    else {
      y++;
      le[y]=a[i];
    }
  }

  cout << "Mang a la so chan: \n";
  for (i=1;i<=x;i++){
    cout << chan[i] << "  ";
  }
  cout << "\nMang b la so le: \n";
  for (i=1;i<=y;i++){
    cout << le[i] << "  ";
  }
  cout << "\n";
}

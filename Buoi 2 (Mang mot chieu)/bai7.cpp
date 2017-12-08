#include <iostream>

using namespace std;

int main(void){
  int i,x,y,z,vt,a[99999],n;
  cout << "Nhap n: ";
  cin >> n;
  for (i=1;i<=n;i++){
    cout << "Nhap phan tu a[" << i <<"]: ";
    cin >> a[i];
  }
  cout << "Mang a sau khi nhap la: \n";
  for (i=1;i<=n;i++){
    cout << a[i] << "  ";
  }
  cout << "\nNhap phan tu x muon chen vao dau mang: ";
  cin >> x;
  n++;
  for (i=n;i>=1;i--){
    a[i]=a[i-1];
  }
  a[1]=x;
  cout << "Mang a sau khi them x la: \n";
  for (i=1;i<=n;i++){
    cout << a[i] << "  ";
  }

  cout << "\nNhap phan tu y muon chen vao cuoi mang: ";
  cin >> y;
  n++;
  a[n]=y;
  cout << "Mang a sau khi them y la: \n";
  for (i=1;i<=n;i++){
    cout << a[i] << "  ";
  }

  cout << "\nNhap phan tu z muon chen vao mang: ";
  cin >> z;
  cout << "Nhap vi tri cua z trong mang: ";
  cin >> vt;
  n++;
  for(i=n;i>=vt;i--){
    a[i]=a[i-1];
  }
  a[vt]=z;
  cout << "Mang a sau khi them z la: \n";
  for (i=1;i<=n;i++){
    cout << a[i] << "  ";
  }
  cout << "\n";
}

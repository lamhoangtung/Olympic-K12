#include <iostream>

using namespace std;

void nhap(int a[],int &n){
  cout << "Nhap n:";
  cin >> n;
  cout << "\n";
  for(int i=0;i<n;i++){
    cout << "Nhap phan tu a[" <<i<< "]: ";
    cin >> a[i];
    cout << "\n";
  }
}

void xuat(int a[],int n){
  for(int i=0;i<n;i++){
    cout << a[i] << "  ";
  }
}

int main(void){
  int a[999999],n;
  nhap(a,n);
  xuat(a,n);
}

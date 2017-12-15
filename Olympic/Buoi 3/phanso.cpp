#include <iostream>

using namespace std;

struct phanso{
  int tu;
  int mau;
};

int ucln(int a,int b){
  while (a!=b){
    if (a>b) a-=b; else b-=a;
  }
}

int main(void){
  phanso a,b,c,d;
  cout << "Nhap phan so a: ";
  cin >> a.tu >> a.mau;
  cout << "Nhap phan so b: ";
  cin >> b.tu >> b.mau;
  if (a.mau==b.mau){
    c.tu = a.tu + b.tu;
    c.mau = a.mau;
  }
  else{
    c.tu = a.tu*b.mau+b.tu*a.mau;
    c.mau = a.mau*b.mau;
  }
  d.tu = a.tu * b.tu;
  d.mau = a.mau * b.mau;
  int x=ucln(c.tu,c.mau);
  cout << "Tong 2 phan so la: " << c.tu/x << "/" << c.mau/x << "\n";
  x=ucln(d.tu,d.mau);
  cout << "Tich 2 phan so la: " <<  d.tu/x << "/" << d.mau/x << "\n";
}

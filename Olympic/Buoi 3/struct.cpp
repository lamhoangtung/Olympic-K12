#include <iostream>

using namespace std;

struct date{
  int ngay;
  int thang;
  int nam;
};

int main(void){
  date a,b;
  int ans;
  cout << "Nhap ngay thang nam cua a: ";
  cin >> a.ngay >> a.thang >> a.nam;
  cout << "Nhap ngay thang nam cua b: ";
  cin >> b.ngay >> b.thang >> b.nam;
  if (a.nam>b.nam) ans=1;
  if (a.nam<b.nam) ans=0;
  if (a.nam==b.nam){
    if (a.thang>b.thang) ans=1;
    if (a.thang<b.thang) ans=0;
    if (a.thang==b.thang){
      if (a.ngay>b.ngay) ans=1;
      if (a.ngay>b.ngay) ans=0;
      if (a.ngay==b.ngay) ans=2;
    }
  }
  if (ans==1) cout << "Ngay a lon hon ngay b\n";
  if (ans==0) cout << "Ngay b lon hon ngay a\n";
  if (ans==2) cout << "Hai ngay trung nhau\n";
}

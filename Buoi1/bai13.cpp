#include <iostream>
using namespace std;
int main(void){
	int a,b,c;
  cout <<"Nhap a,b,c: ";
	cin >> a >> b >> c;
  if (a+b>c && a+c>b && c+b>a) {cout << "THOA MAN\n";}
	else {cout << "KHONG THOA MAN\n";}
}

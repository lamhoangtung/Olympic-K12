#include <iostream>
using namespace std;
int main(void){
	int a,b,c;
  cout << "Nhap a,b,c: ";
	cin >> a >> b >> c;
	while (c<1||c>3){
		cout << "Nhap lai, luu y: 1 <= c <= 3: ";
		cin >> c;
	}
}

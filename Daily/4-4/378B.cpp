#include <iostream>
#include <string>

using namespace std;

int main(void){
	int n;
	cin >> n;
  int a[100001][3];
  string x,y;
	for (int i=0;i<n;i++){
		if(i<n/2){
			x+='1';
			y+='1';
		}
		else{
			x+='0';
			y+='0';
		}
	  for (int j=0;j<2;j++) cin >> a[i][j];
	}
	for (int i=n-1;i>=n/2;i--){
		if(a[i][0]<a[n-i-1][1])	x[i]='1';
		if(a[i][1]<a[n-i-1][0])	y[i]='1';
	}
	cout << x << "\n" << y;
}

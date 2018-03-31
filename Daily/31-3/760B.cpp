#include <iostream>

using namespace std;

int main(void){
  int n,m,k,a=1,c=1;
	cin >> n >> m >> k;
	m-=n;
	while (m>0){
		if(k+a<=n) c++;
		if(k-a>=1) c++;
		m-=c;
		a++;
	}
	cout << a;
}

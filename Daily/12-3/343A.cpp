#include <iostream>

using namespace std;

int main(void){
  long long a,b,r=0;
	cin >> a >> b;
	while(b!=0){
		r+=a/b;
		a%=b;
		swap(a,b);
  }
	cout << r;
}

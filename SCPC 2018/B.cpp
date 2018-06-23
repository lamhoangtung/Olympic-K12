#include <iostream>
#include <cmath>

using namespace std;

int dx(long long n){
	if (n<0) return 0;
	long long m=n;
	long long z=0;
	while (n){
		z+=n%10;
		z*=10;
		n/=10;
	}
	z/=10;
	if (m==z) return 1;
	else return 0;
}

int main(){
	long long i,j,t;
	cin >> t;
	long long p=1;
	while (t){
		long long n;
		cin >> n;
		for (i=n;i>=1;i--){
			if (dx(i)){
				if(i==n){
					cout << "Case #" << p << endl;
					cout << "1" << " " << i << endl;
					break;
				}
				else if(dx(n-i)){
					cout << "Case #" << p << endl;
					cout << "2" << " " << i << " " << n-i << endl;
					break;
				}
				else {
					int l=0;
					for (j=i;j>=1;j--){
						if(dx(j)&&dx(n-i-j)){
							l=1;
							cout << "Case #" << p << endl;
							cout << "3" << " " << i << " " << j << " " << n-i-j << endl;
							break;
						}
					}
					if (l==1) break;
				}
			}
		}
		p++;
		t--;
	}
	return 0;
}

#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
	long long n;
	cin >> n;
	long long a[n];
	for (long long i=0;i<n;i++) cin >> a[i];
	sort(a,a+n);
	long long d = 0;
	for (long long i=0;i<n;i++)
    if (a[i]==a[2]) d++;
	if (a[0]==a[2]) cout << (d-2)*(d-1)*(d)/6;
	else if (a[1]==a[2]) cout << (d-1)*(d)/2;
	else cout << d;
}

#include <iostream>

using namespace std;

int main(void){
	int n,m,k;
	cin >> n >> m >> k;
	k--;
	int ans= 0,q = m;
	while (1){
		int i=ans,j=ans;
		if (k-i<0) i=k;
		if (k+j+1>=n) j=n-1-k;
		int temp=i+j+1;
		if (q-temp<n) break;
		if (temp==n) break;
		ans++;
		q-=temp;
	}
	ans+=q/n;
	cout << ans;
}

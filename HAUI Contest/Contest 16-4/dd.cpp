#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
	int n,a[500005];
	cin >> n;
	for (int i=0;i<n;i++) cin >> a[i];
  if (n==1&&a[0]==1) cout << 1; else {
  int ans=n,p=(n+1)/2;
	sort(a,a+n);
	for (int i=0;i<p;i++){
		while(1){
			if (a[i]*2<=a[p]){
				ans--;
				p++;
				break;
		  }
			else p++;
			if (p==n) break;
		}
		if (p==n) break;
	}
	cout << ans;
  }
}

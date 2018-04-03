#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
	int n;
	cin >> n;
  pair <int,int> a[1001];
	for (int i=0;i<n;i++) cin >> a[i].second >> a[i].first;
	sort(a,a+n);
	reverse(a,a+n);
	int j=1,ans=0;
	for (int i=0;i<n;i++){
		if (j==0) break;
		j+=a[i].first-1;
		ans+=a[i].second;
	}
	cout << ans;
}

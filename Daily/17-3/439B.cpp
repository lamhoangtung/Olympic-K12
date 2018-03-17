#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
	long long i,j,n,k,k1,a[100000],sum=0;
	cin >> n >> k;
	k1 = k;
	for (int i=0;i<n;i++){
		cin >> a[i];
		sum+=a[i];
	}
	sort(a,a+n);
	i=0;
	long long ans=0;
	while(k){
		ans+=a[i]*k;
		i++;
		k--;
	}
	for(i=0;i<k1;i++) sum-=a[i];
	ans+=sum;
	cout << ans;
}

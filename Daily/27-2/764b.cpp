#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	long long a[t];
	for (int i=0;i<t;i++){
		cin >> a[i];
	}
	int i=0,j=t-1;
	while (i<=j){
		if (i%2==0) swap(a[i],a[j]);
		i++;
		j--;
	}
	for (i=0;i<t;i++){
		cout << a[i] << " ";
	}
}

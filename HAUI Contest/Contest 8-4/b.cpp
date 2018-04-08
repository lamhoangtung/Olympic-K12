#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main(void) {
	map <unsigned long long, unsigned long long> m;
	unsigned long long n, r, x, sum = 0;
	cin >> n >> r >> x;
	x*=n;
	for (unsigned long i=0;i<n;i++){
		unsigned long long a,b;
		cin >> a >> b;
		sum+=a;
		m[b]+=r-a;
	}
	unsigned long long k = 0;
	map <unsigned long long, unsigned long long>::iterator it = m.begin();
	while (x>sum && it!=m.end()){
		if (x-sum>(*it).second){
			k+=(*it).second*(*it).first;
			sum+=(*it).second;
		}
    else{
			k+=(x-sum)*(*it).first;
			sum+=(x-sum);
		}
		++it;
	}
	cout << k;
}

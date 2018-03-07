#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
  long long n,p,r,q,a[100001];
  cin >> n >> p >> q >> r;
  for (int i=0;i<n;i++){
    cin >> a[i];
  }
	long long A,b,c;
	A=p*a[0];
  b=A+q*a[0];
  c=b+r*a[0];
  for (int i=1;i<n;i++){
    A = max(A,p*a[i]);
    b = max(b,A+q*a[i]);
    c = max(c,b+r*a[i]);
  }
	cout << c;
}

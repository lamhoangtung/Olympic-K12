#include <iostream>

using namespace std;

int main(void){
	int y,x,k,n,max,l=1;
	cin >> y >> k >> n;
	max=n-y;
	while(1){
	   x=(k*l)-y;
	   if (x<=0) l++;
	   else break;
	}
	l=0;
	while(x<=max && (x+y)<=n){
	   if ((x+y)%k==0){
       cout << x << " ";
	     x+=k;
       l++;
	   }
	   else x++;
	}
	if (l<1) cout << "-1";
}

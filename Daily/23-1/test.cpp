#include <iostream>

using namespace std;

int main(void){
	long long n,i;
  cin >> n;
	for(i=1;i<=n;i++){
    if (i==1) cout << "2\n";
    cout << i*(i+1)*(i+1)-(i-1) << '\n';
	}
}

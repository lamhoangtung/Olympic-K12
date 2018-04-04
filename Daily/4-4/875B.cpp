#include <iostream>

using namespace std;

int main(void){
  int n;
	cin >> n;
  int j=n;
  cout << "1 ";
  bool b[300005];
	for (int i=1;i<=n;i++){
		int a;
    cin >> a;
		b[a]=1;
	  while (b[j]) j--;
		cout << i-(n-j)+1 << " ";
	}
}

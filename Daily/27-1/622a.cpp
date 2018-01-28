#include <iostream>

using namespace std;

int main(void){
  long long i,n;
  cin >> n;
  n--;
  for (i=1;i<=n;i++){
    n-=i;
  }
  cout << n+1;
}

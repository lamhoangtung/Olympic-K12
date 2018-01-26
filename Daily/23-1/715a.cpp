#include <iostream>

using namespace std;

int main(void){
  long long n,i,a;
  cin >> n;
  for(i=2;i<=n;i++){
    a=i*(i+1)*(i+1)-i+1;
    cout << a << "\n";
  }
}

#include <iostream>

using namespace std;

int main(void){
  int n;
  cin >> n;
  if (n%2==0&&(n/2)%2==0) cout << "YES"; else cout << "NO";
}

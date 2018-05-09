#include <iostream>
#include <math.h>

using namespace std;

int main(void){
  ios_base::sync_with_stdio(false); cin.tie(); cout.tie();
  unsigned long long k;
  long double x;
  double lol;
  cin >> k;
  x = sqrt(8*k - 7);
  if (modf(x,&lol)==0) cout << 1;
  else cout << 0;
}

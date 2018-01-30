#include <iostream>

using namespace std;

int main(void){
  int a,b,c,d,e;
  cin >> a >> b >> c >> d >> e;
  int sum=a+b+c+d+e;
  if (sum>0&&sum%5==0)
    cout << sum/5;
  else
    cout << -1;
}

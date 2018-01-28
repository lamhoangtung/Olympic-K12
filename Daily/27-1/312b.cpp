#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
  long long a,b,c,d,i;
  cin >> a >> b >> c >> d;
  double r=double(a)/double(b),z=double(c)/double(d),now=1.0,win=0.0,los=0.0;
  for (i=1;i<=1000000;i++){
    win=win+(now*r);
    los=los+(now*z);
    now=now*(1-r)*(1-z);
    //cout << win << " " << los << " " << now << "\n";
  }
  cout << setprecision(12) << fixed << win;
}

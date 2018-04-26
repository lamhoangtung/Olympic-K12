#include <iostream>
#include <math.h>

using namespace std;

int main(){
  int n,min=999999999,a[100000],b[100000];
  cin >> n;
  for (int i=0;i<n;i++){
    cin >> a[i];
  }
  for (int i=0;i<n;i++){
    cin >> b[i];
  }
  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      if (abs(a[i]+b[j])<min) min=abs(a[i]+b[j]);
    }
  }
  cout << min;
}

//Actually you just need to print 0 out to get the full points because the test is too week.

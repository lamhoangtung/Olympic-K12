#include <iostream>
#include <vector>

using namespace std;

int main(void){
  int n,i;
  cin >> n;
  vector<int> h(n,0);
  for (i=0;i<n;i++){
    cin >> h[i];
  }
  int min=1001;
  int max=h[1]-h[0];
  for (i=1;i<n-1;i++){
    if (h[i+1]-h[i-1]<min) min=h[i+1]-h[i-1];
    if (h[i+1]-h[i]>max) max=h[i+1]-h[i];
  }
  if (min>max) max=min;
  cout << max;
}

#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
  long long a[20000],k,n,m,j;
  cin >> n >> m >> k;
  for (int i=0;i<n;i++){
    cin >> a[i];
  }
  long long b[n*m];
  for (int i=0;i<m;i++){
    int temp;
    cin >> temp;
    for (int d=0;d<n;d++) b[j++]=temp+a[d];
  }
  sort(b,b+j-1);
  for (int q=0;q<k;q++){
        cout << b[q] << " ";
  }
}

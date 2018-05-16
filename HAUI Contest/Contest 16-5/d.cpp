#include <iostream>
#include <math.h>

using namespace std;

int sochinhphuong(float n){
 if ((float)sqrt(n) - (int)sqrt(n) == 0) return 1;
 return 0;
}

int dem=0;

void pitago(int n,int k){
 int i, j;
 for (i = 2; i < n; i++)
 for (j = i; j < n; j++)
 {
  if (sqrt(i*i+j*j)>n) break;
  if (sochinhphuong(i*i + j*j)){
    if (k==1) cout << i << " " << j << " " << sqrt(i*i + j*j) << "\n";
    dem++;
  }
 }
}

int main(){
  int n;
  cin >> n;
  pitago(n,0);
  cout << dem << "\n";
  pitago(n,1);
  return 0;
}

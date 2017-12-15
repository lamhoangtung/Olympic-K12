#include <iostream>

using namespace std;

int hoanhao(int n){
  int i=1,sum=0;
  bool ans;
  while(i<n){
      if(n%i==0)
           sum=sum+i;
           i++;
  }
  if(sum==n) ans=true; else ans=false;
  return ans;
}

int main(void){
  int n,m,i,j,a[999][999],sum=0;
  cout << "Nhap n: ";
  cin >> n;
  cout << "Nhap m: ";
  cin >> m;
  for (i=1;i<=n;i++){
    for (j=1;j<=m;j++){
      cout << "Nhap phan tu a[" << i << "," << j << "]: ";
      cin >> a[i][j];
    }
  }
  cout << "\nMang ban vua nhap la:\n";
  for (i=1;i<=n;i++){
    for (j=1;j<=m;j++){
      cout << a[i][j] << "  ";
      if (hoanhao(a[i][j])==true) sum+=a[i][j];
    }
    cout << "\n";
  }
  cout << "Tong cac so hoan hao trong mang a la: " << sum << "\n";
}

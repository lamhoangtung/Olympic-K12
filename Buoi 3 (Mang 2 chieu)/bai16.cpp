#include <iostream>

using namespace std;

int cucdai3(int n, int a, int b, int c){
  bool ans;
  if (n>a && n>b && n>c) ans=true; else ans=false;
  return ans;
}

int cucdai5(int n, int a, int b, int c, int d, int e){
  bool ans;
  if (n>a && n>b && n>c && n>d && n>e) ans=true; else ans=false;
  return ans;
}

int cucdai8(int n, int a, int b, int c, int d, int e, int f, int g, int h){
  bool ans;
  if (n>a && n>b && n>c && n>d && n>e && n>f && n>g && n>h) ans=true; else ans=false;
  return ans;
}

int cuctieu3(int n, int a, int b, int c){
  bool ans;
  if (n<a && n<b && n<c) ans=true; else ans=false;
  return ans;
}

int cuctieu5(int n, int a, int b, int c, int d, int e){
  bool ans;
  if (n<a && n<b && n<c && n<d && n<e) ans=true; else ans=false;
  return ans;
}

int cuctieu8(int n, int a, int b, int c, int d, int e, int f, int g, int h){
  bool ans;
  if (n<a && n<b && n<c && n<d && n<e && n<f && n<g && n<h) ans=true; else ans=false;
  return ans;
}

int main(void){
  int n,m,i,j,a[999][999],dai=0,tieu=0;
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
    }
    cout << "\n";
  }
  if (cucdai3(a[1][1],a[1][2],a[2][1],a[2][2])==true) dai++;
  if (cuctieu3(a[1][1],a[1][2],a[2][1],a[2][2])==true) tieu++;
  if (cucdai3(a[1][m],a[1][m-1],a[2][m],a[2][m-1])==true) dai++;
  if (cuctieu3(a[1][m],a[1][m-1],a[2][m],a[2][m-1])==true) tieu++;
  if (cucdai3(a[n][1],a[n][2],a[n-1][1],a[n-1][2])==true) dai++;
  if (cuctieu3(a[n][1],a[n][2],a[n-1][1],a[n-1][2])==true) tieu++;
  if (cucdai3(a[n][1],a[n][2],a[n-1][1],a[n-1][2])==true) dai++;
  if (cuctieu3(a[n][1],a[n][2],a[n-1][1],a[n-1][2])==true) tieu++;

  for (j=2;j<m;j++){
    if (cucdai5(a[1][j],a[1][j-1],a[1][j+1],a[2][j],a[2][j-1],a[2][j+1])==true) dai++;
    if (cuctieu5(a[1][j],a[1][j-1],a[1][j+1],a[2][j],a[2][j-1],a[2][j+1])==true) tieu++;
    if (cucdai5(a[n][j],a[n][j-1],a[n][j+1],a[n-1][j],a[n-1][j-1],a[n-1][j+1])==true) dai++;
    if (cuctieu5(a[n][j],a[n][j-1],a[n][j+1],a[n-1][j],a[n-1][j-1],a[n-1][j+1])==true) tieu++;
  }

  for (i=2;i<n;i++){
    for (j=2;j<m;j++){
      if (cucdai8(a[i][j],a[i-1][j],a[i-1][j-1],a[i-1][j+1],a[i][j-1],a[i][j+1],a[i+1][j],a[i+1][j-1],a[i+1][j+1])==true) dai++;
      if (cucdai8(a[i][j],a[i-1][j],a[i-1][j-1],a[i-1][j+1],a[i][j-1],a[i][j+1],a[i+1][j],a[i+1][j-1],a[i+1][j+1])==true) tieu++;
    }
  }

  cout << "\nSo cuc dai trong mang a la: " << dai << "\n";
  cout << "So cuc tieu trong mang a la: " << tieu << "\n";
}

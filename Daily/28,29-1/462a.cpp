#include <iostream>

using namespace std;

int main(void){
  int n,i,j,dem;
  cin >> n;
  char board[999][999];
  for (i=1;i<=n;i++){
    for (j=1;j<=n;j++){
      cin >> board[i][j];
    }
  }
  bool ans=true;
  for (j=1;j<=n && ans;j++){
    dem=0;
    for (i=1;i<=n;i++){
      if (board[i-1][j]=='o') dem++;
      if (board[i+1][j]=='o') dem++;
      if (board[i][j-1]=='o') dem++;
      if (board[i][j+1]=='o') dem++;
      if (dem%2!=0){
        ans=false;
        break;
      }
    }
  }
  if (ans==true) cout << "YES"; else cout << "NO";
}

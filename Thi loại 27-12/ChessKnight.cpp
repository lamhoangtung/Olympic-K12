#include <iostream>
#include <string>

using namespace std;

int main(void){
  int i,y,j,ans,x,a[999][999];
  string s;
  getline (cin,s);
    if (s[0]=='a') x=1;
    if (s[0]=='b') x=2;
    if (s[0]=='c') x=3;
    if (s[0]=='d') x=4;
    if (s[0]=='e') x=5;
    if (s[0]=='f') x=6;
    if (s[0]=='g') x=7;
    if (s[0]=='h') x=8;
    if (s[1]=='1') y=1;
    if (s[1]=='2') y=2;
    if (s[1]=='3') y=3;
    if (s[1]=='4') y=4;
    if (s[1]=='5') y=5;
    if (s[1]=='6') y=6;
    if (s[1]=='7') y=7;
    if (s[1]=='8') y=8;
  for (i=1;i<=8;i++){
    for (j=1;j<=8;j++){
      a[i][j]=1;
    }
  }
  if (a[x-2][y-1]==1) ans++;
  if (a[x-2][y+1]==1) ans++;
  if (a[x-1][y-2]==1) ans++;
  if (a[x-1][y+2]==1) ans++;
  if (a[x+1][y-2]==1) ans++;
  if (a[x+1][y+2]==1) ans++;
  if (a[x+2][y-1]==1) ans++;
  if (a[x+2][y+1]==1) ans++;
  cout << ans;
}

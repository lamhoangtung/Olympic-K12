#include <iostream>

using namespace std;

struct mt{
  unsigned char a,b,c,d;
};

int main(void){
  int n,m,i,j,x=0;
  unsigned char a[1000][1000];
  mt matran[1000000];
  cin >> n >> m;

  for (i=1;i<=n;i++){
    for (j=1;j<=m;j++){
      cin >> a[i][j];
    }
  }

  for (i=1;i<=n-1;i++){
    for (j=1;j<=m-1;j++){
      x++;
      matran[x].a=a[i][j];
      matran[x].b=a[i][j+1];
      matran[x].c=a[i+1][j];
      matran[x].d=a[i+1][j+1];
    }
  }

  for (i=1;i<=x;i++){
    for (j=1;j<=x;j++){
      if (matran[i].a==matran[j].a&&matran[i].b==matran[j].b&&matran[i].c==matran[j].c&&matran[i].d==matran[j].d&&j!=i){
        matran[j].a=11;
        matran[j].b=11;
        matran[j].c=11;
        matran[j].d=11;
      }
    }
  }
  j=0;
  for (i=1;i<=x;i++){
    if (matran[i].a!=11&&matran[i].b!=11&&matran[i].c!=11&&matran[i].d!=11) j++;
  }
  cout << j;
}

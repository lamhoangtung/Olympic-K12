#include <iostream>
#include <vector>

using namespace std;

int main(void){
  int n,i,j,x,m,q,temp;
  cin >> n >> m >> q;
  vector <int> a[9999],b[9999],product[9999];
  for (i=0;i<n;i++){
    for (j=0;j<m;j++){
      cin >> temp;
      a[i].push_back(temp);
    }
  }
  for (i=0;i<m;i++){
    for (j=0;j<q;j++){
      cin >> temp;
      b[i].push_back(temp);
    }
  }
  for (i=0;i<n;i++){
    for (j=0;j<q;j++){
      temp=0;
      for (x=0;x<m;x++){
        temp+=a[i][x]*b[x][j];
      }
      product[i].push_back(temp);
      cout << product[i][j] << " ";
    }
    cout << "\n";
  }
}

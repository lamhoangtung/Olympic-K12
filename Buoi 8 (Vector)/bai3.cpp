#include <iostream>
#include <vector>

using namespace std;

int main(void){
  int n,i,j,temp;
  cin >> n;
  vector <int> a[9999],sum[9999];
  for (i=0;i<n;i++){
    for (j=0;j<n;j++){
      cin >> temp;
      a[i].push_back(temp);
    }
  }

  for (i=0;i<n;i++){
    for (j=0;j<n;j++){
      cin >> temp;
      sum[i].push_back(a[i][j]+temp);
    }
  }

  for (i=0;i<n;i++){
    for (j=0;j<n;j++){
      cout << sum[i][j] << " ";
    }
  cout << "\n";
  }
}

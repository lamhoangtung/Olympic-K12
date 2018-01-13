#include <iostream>
#include <vector>

using namespace std;

int main(void){
  int n,m,i,temp;
  vector <int> a;
  cin >> n >> m;
  for (i=1;i<=n;i++){
    a.push_back(i);
  }
  while (a.size()!=1){
    n=a.size();
    temp=m%n;
    if (temp==0){
      temp=n;
    }
    cout << a[temp-1] << " ";
    a.erase(a.begin()+temp-1,a.begin()+temp);
    for (i=1;i<temp;i++){
      a.push_back(a[0]);
      a.erase(a.begin(),a.begin()+1);
    }
  }
  cout << a[0];
}

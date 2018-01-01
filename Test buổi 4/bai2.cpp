#include <iostream>

using namespace std;

string chu[]={"KHONG","MOT","HAI","BA","BON","NAM","SAU","BAY","TAM","CHIN"};

int main(void){
  int n,i=0,a[5];
  cin >> n;
  if (n==0) cout << "KHONG";
  else{
    while (n!=0)
    {
      i++;
      a[i]=n%10;
      n=n/10;
    }
  }
  n=i;
  for (i=n;i>=1;i--){
    cout << chu[a[i]] << " ";
  }
}

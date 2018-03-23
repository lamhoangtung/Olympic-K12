#include <iostream>

using namespace std;

int main(){
  int n,m,a[1000],left=0,right=0;
  cin >> n >> m;
  for (int i=0;i<n;i++){
    cin >> a[i];
    right+=a[i];
  }
  while (left<=right){
    int mid=(left+right)/2;
    int temp=0,sl=0;
    for (int i=0;i<n;i++){
      if (a[i]>=mid){

        break;
      }
      else{
        temp+=a[i];
        if (temp>=mid){
          temp=0;
          i--;
          sl++;
        }
      }
    }
    if (sl==m){
      cout << mid;
      return 0;
    }
    else if (sl<m) right=mid--;
    else left=mid++;
  }
}

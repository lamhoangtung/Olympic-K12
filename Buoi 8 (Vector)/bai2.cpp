#include <iostream>
#include <vector>

using namespace std;

int main(void){
  int i,j,n,t,temp;
  cin >> n >> t;
  vector <int> a,b;
  for (i=0;i<n;i++){
    cin >> temp;
    a.push_back(temp);
    b.push_back(temp);
  }
  if (t%n==0){
    for (i=0;i<n;i++){
      cout << a[i] << " ";
    }
  }
  else {
    t=t%n;
    j=0;
    for (i=t;i<n;i++){
      b[j]=a[i];
      j++;
    }
    for (i=0;i<t;i++){
      b[j]=a[i];
      j++;
    }
    for (i=0;i<n;i++){
    cout << b[i] << " ";
    }
  }
}

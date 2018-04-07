#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int n,a[100005],b[100005];
  cin >> n;
  for (int i=0;i<n;i++){
    cin >> a[i];
    b[i]=a[i];
  }
  sort(a,a+n);
  int start = 0, end = 0;
  for (int i=0;i<n;i++){
    if (a[i]!=b[i]){
      start=i;
      break;
    }
  }

  for (int i=n-1;i>=0;i--){
    if (a[i]!=b[i]){
      end=i;
      break;
    }
  }

  int j=end;
  for (int i=start;i<=end;i++){
    if (a[i]!=b[j]){
      cout << "no";
      return 0;
    }
    j--;
  }
  start++;
  end++;
  cout << "yes\n" << start << " " << end;
  return 0;
}

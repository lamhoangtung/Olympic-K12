#include <iostream>
#include <cstdlib>

using namespace std;

int a[100];

void qsort(int left, int right){
  int i=left,j=right;
  int mid=a[left+rand()%(right-left+1)];
  while (i<=j){
    while (a[i]<mid) i++;
    while (a[j]>mid) j--;
    if (i<=j){
      swap(a[i],a[j]);
      i++;
      j--;
    }
  }
  if (i<right) qsort(i,right);
  if (j>left) qsort(left,j);
}

int main(void){
  int n;
  cin >> n;
  for (int i=0;i<n;i++){
    cin >> a[i];
  }
  qsort(0,n-1);
  for (int i=0;i<n;i++){
    cout << a[i] << " ";
  }
  cout << "\n";
}

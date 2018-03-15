#include <iostream>
#include <cstdlib>

using namespace std;

void heaptify(int a[], int n, int x);

void heapsort(int a[], int l, int r){
  int i;
  for (i=r/2-1;i>=0;i--) heaptify(a,r,i);
  for (i=r-1;i>=0;i--){
    swap(a[0],a[i]);
    heaptify(a,i,0);
  }
}

void heaptify(int a[], int n, int x){
  int l=2*x+1;
  int r=2*x+2;
  int tmp=x;
  if (l<n && a[l]>a[x]) x=l;
  if (r<n && a[r]>a[x]) x=r;
  if (tmp!=x){
    swap(a[tmp],a[x]);
    heaptify(a,n,x);
  }
}

int main(void){
  int a[100],n;
  cin >> n;
  for (int i=0;i<n;i++){
    cin >> a[i];
  }
  heapsort(a,0,n-1);
  for (int i=0;i<n;i++){
    cout << a[i] << " ";
  }
  cout << "\n";
}

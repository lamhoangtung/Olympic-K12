#include <iostream>
#include <queue>
#include <cmath>
#include <stdlib.h>

using namespace std;

int BinarySearchDepth(int h[],int t[],int p[],int n,int left, int right, int u, int v){
  int mid=(left+right)/2;
  if (t[u]==t[v]){
    return BinarySearchDepth( )
  }
}

int main(){
  int n;
  cin >> n;
  int p[n+1][n+1],t[4*n];
  for (int i=0;i<=n;i++){
    for (int j=0;j<=n;j++){
      p[i][j]=-1;
    }
  }
  //Wut da feck am i doin
  for (int i=0;i<=n;i++){
    for (int j=0;j<=n;j++){
      if (j==0){
        p[i][j]=t[i];
      }
      else{
        p[i][j]=p[p[i][j-1]][j-1];
      }
    }
  }
  int h[4*n];
  int q;
  cin >> q;
  for (int k=0;k<q;k++){
    int u,v;
    cin >> u >> v;
    int hv=max(h[v],h[u]);
    int hu=min(h[v],h[u]);
    h[v]=hv;
    h[u]=hu;
    for (int i=log2(h[v]-h[u]);i>=0;i--){
      if (h[v]-pow(2,i)>=h[u]){
        v=p[v][i];
      }
    }
  }
  return 0;
}

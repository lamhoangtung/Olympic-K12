#include <iostream>

using namespace std;

int n,a[1000000];
long long tree[4000000];

void build(int l, int r, int node){
  if (l>r) return;
  if (l==r) tree[node]=a[l];
  build(l,(l+r)/2,2*node);
  build(((l+r)/2+1),r,2*node+1);
  tree[node] = tree[2*node] + tree[2*node+1];
}

void update(int l, int r, int node, int pos, int value){
  if (l==r && r==pos){
    tree[node]=value;
    return ;
  }
  if ((l+r)/2<pos) update(((l+r)/2)+1,r,2*node+1,pos,value);
  else update(l,(l+r)/2,2*node,pos,value);
  tree[node] = tree[2*node] + tree[2*node+1];
}

long long query(int l,int r, int node, int low, int high){
  if (l==low && l==high) return tree[node];
  if (low>r || high<l) return 0;
  return query(l,(l+r)/2,2*node,low,high) + query((((l+r)/2)+1),r,2*node+1,low,high);
}

int main(){
  int k;
  cin >> n >> k;
  for (int i=1;i<=n;i++){
    cin >> a[i];
  }
  build(1,n,1);
  for (int i=1;i<=k;i++){
    int type,x,y;
    cin >> type >> x >> y;
    if (type == 1)
      update(1,n,x,y,1);
    if (type == 0)
      cout << query(1,n,1,x,y) << "\n";
  }
  return 0;
}

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
  if (l==low && r==high) return tree[node];
  if (low>r || high<l) return 0;
  return query(l,(l+r)/2,2*node,low,high) + query((((l+r)/2)+1),r,2*node+1,low,high);
}

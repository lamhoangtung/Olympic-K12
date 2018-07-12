void build(int a[],int n, int l, int r, int tree[], int node){
  if (l>r) return;
  if (l==r) tree[node]=a[l];
  build(a,n,l,(l+r)/2,tree,2*node);
  build(a,n,((l+r)/2+1),r,tree,2*mid+1);
}



void update(int l, int r, int pos, int value){
  if (l==r && r==pos){
    tree[node]=value;
    return ;
  }
  if ((l+r)/2<pos) update(((l+r)/2)+1,r,2*node+1);
  else update(l,(l+r)/2,2*node);
  tree[node] = tree[2*node] + tree[2*node+1];
}

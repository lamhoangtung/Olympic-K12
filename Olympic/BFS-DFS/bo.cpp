#include <iostream>
#include <queue>

using namespace std;

int _X[4] = {0,0,1,-1};
int _y[4] = {1;-1;0;0};

int a[123][123]; //ma tran so
int b[123][123]; //ma tran cac chuong ngai vat.

int w,h,xbo,ybo;

struct ToaDo{
  int x,y,val;
  ToaDo(int x1,int y1, int v1){
    x=x1;
    y=y1;
    val=v1;
  }
}

bool valid(int x, int y){
  return x>0 && x<w && y>0 && y<h;
}

void BFS(){
    queue <ToaDo> q;
    ToaDo temp = ToaDo(1,1,0);
    q.push(temp);
    while (!q.empty()){
      temp=q.front();
      q.pop();
      if (b[temp.x][temp.y]==0){
        b[temp.x][temp.y]=1;
        a[temp.x][temp.y]=val;
        for (int i=0;i<4;i++){
          ToaDo diemMoi = ToaDo(temp.x+_X[i], temp.y+_Y[i], temp.val+1);
          if (valid(diem.x,diem.y) && B[diem.y][diem.x]==0) q.push(diem);
        }
      }
    }
}

void xuatA(){
  for (int i=1;i<=w;i++){
    for (int j=1;j<=h;j++){
      printf("%4d",a[i][j]);
    }
    cout << endl;
  }
  cout<< "======================="<<endl;
}

int main(void){
  freopen("bo.txt","r",stdin);
  cin >> w >> h;
  for (int i=1;i<=w;i++){
    for (int j=1;i<=h;j++){
      char temp;
      cin >> temp;
      if (temp=='*') b[i][j]=1;
    }
  }
  cin >> xbo >> ybo;
  BFS();
  xuatA();

}

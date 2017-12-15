#include <iostream>

using namespace std;

int d = 1;

void topRight(int [999][999], int, int, int, int);
void bottomLeft(int [999][999], int, int, int, int);

void topRight(int a[999][999], int x1, int y1, int x2, int y2) {
  for (int i=x1;i<=x2;i++) a[y1][i]=d++;
  for (int j=y1+1;j<=y2;j++) a[j][x2]=d++;
  if (x2-x1>0 && y2-y1>0){
    y1++;
    x2--;
    bottomLeft(a,x1,y1,x2,y2);
  }
}

void bottomLeft(int a[999][999], int x1, int y1, int x2, int y2) {
	for (int i=x2;i>=x1;i--) a[y2][i]=d++;
	for (int j=y2-1;j>=y1;j--) a[j][x1]=d++;
	if (x2-x1>0 && y2-y1>0) {
		x1++;
    y2--;
		topRight(a,x1,y1,x2,y2);
	}
}

int main(void){
	int a[999][999],m,n,i,j;
  cout << "Nhap n: ";
  cin >> n;
  cout << "Nhap m: ";
  cin >> m;
	topRight(a,0,0,n-1,m-1);
  cout << "\nMang 2 chieu hinh xoan oc co kich thuoc " << m << " x " << n << " la: \n\n";
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      cout << a[i][j] << "  ";
    }
    cout << "\n";
  }
}

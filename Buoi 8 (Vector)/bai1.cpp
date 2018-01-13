#include <iostream>
#include <vector>

using namespace std;

int d = 1;

void topRight(vector <int> [9999], int, int, int, int);
void bottomLeft(vector <int> [9999], int, int, int, int);

void topRight(vector <int> a[9999], int x1, int y1, int x2, int y2) {
  for (int i=x1;i<=x2;i++) a[y1][i]=d++;
  for (int j=y1+1;j<=y2;j++) a[j][x2]=d++;
  if (x2-x1>0 && y2-y1>0){
    y1++;
    x2--;
    bottomLeft(a,x1,y1,x2,y2);
  }
}

void bottomLeft(vector <int> a[9999], int x1, int y1, int x2, int y2) {
	for (int i=x2;i>=x1;i--) a[y2][i]=d++;
	for (int j=y2-1;j>=y1;j--) a[j][x1]=d++;
	if (x2-x1>0 && y2-y1>0) {
		x1++;
    y2--;
		topRight(a,x1,y1,x2,y2);
	}
}

int main(void){
	int m,n,i,j;
  vector <int> a[9999];
  cin >> n;
  m=n;
  for (i=0;i<n;i++){
    for (j=0;j<m;j++){
      a[i].push_back(1);
    }
  }
	topRight(a,0,0,n-1,m-1);
  for (i=0;i<n;i++){
    for(j=0;j<m;j++){
      cout << a[i][j] << "  ";
    }
    cout << "\n";
  }
}

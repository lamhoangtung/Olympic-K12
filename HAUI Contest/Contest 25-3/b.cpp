#include <iostream>

using namespace std;

int main(void){
  int i=0,dem=2,pos=2,n,a[1000000];
  a[0]=4;
  a[1]=7;
  cin >> n;
  while (1){
	    int x=a[i]*10+4;
	    int y=a[i]*10+7;
	    a[pos++]=x;
	    a[pos++]=y;
	    i++;
	    if(x>=n&&y>=n) break;
      dem+=2;
  }
  cout << dem << "\n";
  for (int j=0;j<dem;j++){
    cout << a[j] << "\n";
  }
}

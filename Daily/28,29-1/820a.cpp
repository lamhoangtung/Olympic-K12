#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
  int c,v0,v1,a,l;
  cin >> c >> v0 >> v1 >> a >> l;
  int i=v0,tg=1,add=v0;
  while (i<c){
    add=min(v1,add+a);
    i+=add-l;
    tg++;
  }
  cout << tg;
}

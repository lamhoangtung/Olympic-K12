#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

long long a,b,c,m,k,cc;
pair <int,string> p[300100];

int main(void){
  cin >> a >> b >> c;
  cin >> m;
  for (int i=0;i<m;i++) cin>>p[i].first>>p[i].second;
  sort(p,p+m);
  for (int i=0;i<m;i++){
    if (a && p[i].second=="USB") a--;
    else if (b && p[i].second=="PS/2") b--;
    else if(c) c--;
    else continue;
    k++;
    cc+=p[i].first;
  }
  cout << k << " " << cc << "\n";
}

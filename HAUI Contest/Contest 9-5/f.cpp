#include <iostream>

using namespace std;

struct sinhvien{
  int a,b,c,d;
};

int main(void){
  ios_base::sync_with_stdio(false); cin.tie(); cout.tie();
  long long n,t,p;
  cin >> n >> t >> p;
  sinhvien x[1005];
  for (int i=0;i<n;i++){
    cin >> x[i].a >> x[i].b >> x[i].c >> x[i].d;
  }
  int ans=0;
  bool check[1005];
  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      if (x[j].a<=t && x[j].b<=p && check[j]==false){
        check[j]=true;
        ans++;
        t+=x[j].c;
        p+=x[j].d;
      }
    }
  }
  cout << ans;
}

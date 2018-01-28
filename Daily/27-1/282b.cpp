#include <iostream>
#include <string>

using namespace std;

int main(void){
  int n,i;
  string ans="";
  cin >> n;
  int t=0;
  for (i=0;i<n;i++){
    int a,b;
    cin >> a >> b;
    if (t+a<=500){
      t+=a;
      ans+="A";
    }
    else{
      t-=b;
      ans+="G";
    }
  }
  cout << ans;
}

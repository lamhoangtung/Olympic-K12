#include <iostream>
#include <string>

using namespace std;

int main(void){
  string a;
  cin >> a;
  int i,n=a.length();
  for(i=0;i<n;i++){
    if (a[i]==a[i+1]) {
      a.erase(i,2);
      i=-1;
    }
  }
  if (a.length()==0) cout << "Empty String";
    else  cout << a;
}

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void){
  int n;
  map<string,int> m;
  cin >> n;
  for (int i=0;i<n;i++){
    string temp;
    cin >> temp;
    m[temp]++;
    if (m[temp]==1) cout << "OK\n";
    else cout << temp << m[temp]-1 << "\n";
  }
}

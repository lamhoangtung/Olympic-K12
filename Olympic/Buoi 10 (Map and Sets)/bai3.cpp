#include <iostream>
#include <set>

using namespace std;

int main(void){
  set<int> s;
  int n;
  cin >> n;
  for (int i=0;i<n;i++){
    int temp;
    cin >> temp;
    s.insert(temp);
  }
  for(set<int> ::iterator it=s.begin();it!=s.end();it++){
    cout << (*it) << " ";
  }
}

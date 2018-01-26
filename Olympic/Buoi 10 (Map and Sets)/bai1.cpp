#include <iostream>
#include <map>

using namespace std;

int main(void){
  map<string,int> m;
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    string temp;
    cin >> temp;
    int diem;
    cin >> diem;
    if (m[temp]<diem){
      m[temp]=diem;
    }
  }
  map<string,int> ::iterator it;
  for(it=m.begin();it!=m.end();it++){
    cout << (*it).first << " " << (*it).second << "\n";
  }
}

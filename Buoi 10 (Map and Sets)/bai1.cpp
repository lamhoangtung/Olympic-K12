#include <iostream>
#include <map>
#include <string>
#include <sstream>

using namespace std;

string IntToString (int a)
{
    ostringstream temp;
    temp<<a;
    return temp.str();
}

int main(void){
  map<string,int> m;
  string a[120];
  int n,i;
  cin >> n;
  for (i=0;i<n;i++){
    string s;
    cin >> s;
    m[s]++;
    if (m[s]==1){
      a[i]="OK";
    }
    else{
      string temp=IntToString(m[s]-1);
      a[i]=s+temp;
    }
  }
  for (i=0;i<n;i++){
    cout << a[i] << "\n";
  }
}

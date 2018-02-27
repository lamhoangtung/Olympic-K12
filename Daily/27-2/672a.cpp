#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(void){
  int n,i=0,l=0;
  cin >> n;
  string s;
  while (l<=n){
    i++;
    std::ostringstream ss;
    ss << i;
    std::string temp(ss.str());
    s+=temp;
    l=s.length();
  }
  cout << s[n-1];
}

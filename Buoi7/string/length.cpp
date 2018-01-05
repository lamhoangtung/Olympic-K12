#include <iostream>

using namespace std;

int length(string a){
  return a.size();
}

int main(void){
  string a;
  cin >> a;
  cout << length(a) << '\n';
}

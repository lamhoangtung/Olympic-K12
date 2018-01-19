#include <iostream>
#include <queue>

using namespace std;

int main(void){
  string s;
  cin >> s;
  queue <char> q;
  for (int i=0;i<s.length();i++){
    if (s[i]!='*'){
      q.push(s[i]);
    }
    else{
      if (!q.empty()){
        cout << q.front();
        q.pop();
      }
    }
  }
}

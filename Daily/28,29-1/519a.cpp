#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void){
  string s;
  int w=0,b=0;
  map<char,int> c;
  map<char,int> t1={{'Q',9},{'R',5},{'B',3},{'P',1},{'K',0}};
  map<char,int> t2={{'q',9},{'r',5},{'b',3},{'p',1},{'k',0}};
  for (int i=0;i<8;i++){
    getline(cin,s);
    int j=0;
    while (s[j]){
      if (isalpha(s[j])){
        if (c.find(s[j])==c.end()) c[s[j]]=1;
        else c[s[j]]++;
      }
      j++;
    }
  }

  for (map<char,int>::iterator it=c.begin();it!=c.end();it++){
    if (t1.find(it->first)!=t1.end())
      w+=t1[it->first] * it->second;
    else
      b+=t2[it->first] * it->second;
  }

  if (w>b) cout << "White";
  else if (b>w) cout << "Black";
  else cout << "Draw";
}

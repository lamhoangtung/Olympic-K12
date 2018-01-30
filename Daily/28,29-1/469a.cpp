#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(void){
  int i,j,n,p,q,temp;
  cin >> n >> p;
  vector<int> levels;
  vector<int>::iterator it;
  set <int> numbers;
  for (i=0;i<p;i++){
    cin >> temp;
    levels.push_back(temp);
  }
  cin >> q;
  for (j=0;j<q;j++){
    cin >> temp;
    levels.push_back(temp);
  }
  for(it=levels.begin();it!=levels.end();it++){
    if (numbers.find(*it)==numbers.end()) numbers.insert(*it);
  }
  bool ans=true;
  for (i=1;i<=n;i++){
    if (numbers.find(i)==numbers.end()) ans=false;
  }

  if (ans==true) cout << "I become the guy.";
  else cout << "Oh, my keyboard!";

}

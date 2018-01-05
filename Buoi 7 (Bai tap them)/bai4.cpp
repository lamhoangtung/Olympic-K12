#include <iostream>
#include <string>

using namespace std;

string check(string s) {
  int n=s.length(),i,j=0;
  string h="hackerrank";
  for (i=0;i<n;i++){
    if (s[i]==h[j] && j<10) j++;
      else if (j==10) break;
  }
  if (j==10) return "YES";
    else return "NO";
}

int main(void){
  int n,i;
  cin >> n;
  string s[101];
  for (i=1;i<=n;i++){
    cin >> s[i];
  }
  for (i=1;i<=n;i++){
    cout << check(s[i]) << "\n";
  }
}

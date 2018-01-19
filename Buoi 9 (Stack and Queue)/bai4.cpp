#include <iostream>
#include <string.h>

using namespace std;

bool check(char a,char b){
  if (a=='['&&b==']'||a==']'&&b=='['||a=='('&&b==')'||a==')'&&b=='('||a=='{'&&b=='}'||a=='}'&&b=='{') return true;
  else return false;
}

int main(void){
  char s[9999],a[9999],b[9999];
  cin >> s;
  int i,j=-1,n=strlen(s),c=n/2;
  for (i=0;i<c;i++){
    a[i]=s[i];
  }
  for (i=n-1;i>=c;i--){
    j++;
    b[j]=s[i];
  }
  int d=0;
  for (i=0;i<c;i++){
    if (check(a[i],b[i])==true) d++;
  }
  if (d==c) cout << "yes"; else cout << "no";
}

#include <iostream>
#include <stack>

using namespace std;

int out2nd(stack<int> &s) {
  stack<int> s2=s;
  s2.pop();
  return s2.top();
}

int main(void){
    int n,type,i,j=0,a[100000];
    stack<int> s;
    cin >> n;
    for (i=0;i<n;i++){
        cin >> type;
        if (type==1){
            int x;
            cin >> x;
            s.push(x);
        }
        if (type==2) s.pop();
        if (type==3){
          j++;
          a[j]=out2nd(s);
        }
    }
    if (j!=0){
      for (i=1;i<=j;i++){
        cout << a[i] << "\n";
      }
    }
}

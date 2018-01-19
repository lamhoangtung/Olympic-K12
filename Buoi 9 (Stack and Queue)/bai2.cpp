#include <iostream>
#include <stack>

using namespace std;

int getmax(stack<int> &s) {
	int max=s.top();
	stack<int> s1;
	s1.push(s.top());
	s.pop();
 	while (!s.empty()) {
		if (s.top()<max) {
			max=s.top();
		}
		s1.push(s.top());
		s.pop();
	}
	return max;
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
          a[j]=getmax(s);
        }
    }
    if (j!=0){
      for (i=1;i<=j;i++){
        cout << a[i] << "\n";
      }
    }
}

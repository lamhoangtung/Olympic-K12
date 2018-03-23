#include <iostream>
#include <string>
#include <stack>
#include <map>

using namespace std;

int main(void){
  int n;
	cin >> n;
  stack<string> s;
  map<string,int> m;
	for (int i=0;i<n;i++){
    string temp;
		cin >> temp;
		s.push(temp);
	}
	while(!s.empty()){
		if(m[s.top()]!= 1){
			m[s.top()]=1;
			cout << s.top() << "\n";
		}
		s.pop();
	}
}

#include <iostream>
#include <vector>
using namespace std;
int main(){
	int N, M;
	vector <int> a ;
	cin>>N>>M ;
	for(int i=1; i<=N; i++) {
		a.push_back(i) ;
	}
	while(a.size()!=1){
		int x;
		N=a.size() ;
		x=M%N;
        if (x==0){
            x=N;
        }
        cout<<a[x-1] <<" ";
        a.erase(a.begin()+x-1,a.begin()+x);
        for(int i=1; i<x; i++){
            a.push_back(a[0]);
            a.erase(a.begin(),a.begin()+1);
        }
	}
	cout<<a[0] ;
	return 0;
}

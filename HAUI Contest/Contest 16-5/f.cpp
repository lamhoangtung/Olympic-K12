#include<bits/stdc++.h>

using namespace std;

int main(){
	int m, n, q ;
	vector <vector <int> > a (100, vector <int> (100));
	vector <vector <int> > b (100, vector <int> (100));
	vector <vector <int> > c (100, vector <int> (100));
	cin>>m>>n;
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			cin>>a.at(i).at(j);
		}
	}
	cin>>n>>q;
	for(int i=0; i<n; i++) {
		for(int j=0; j<q; j++) {
			cin>>b.at(i).at(j);
		}
	}
	for(int i=0; i<m; i++) {
		for(int j=0; j<q; j++) {
			for(int k=0; k<n; k++) {
				c.at(i).at(j) += a.at(i).at(k)*b.at(k).at(j);
			}
		}
	}
	cout<<m<<" "<<q<<endl;
	for(int i=0; i<m; i++) {
		for(int j=0; j<q; j++) {
			cout << c[i][j] << " ";
		}
		cout<<endl;
	}
	return 0;
}

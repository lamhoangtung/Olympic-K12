#include <iostream>
#include <queue>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(); cout.tie();
	int d[1001][1001];
	queue<pair<int, int> > q;
	pair<int, int> N,M,K;
	int x[8]={-2,-1,1,2,2,1,-1,-2},y[8]={-1,-2,-2,-1,1,2,2,1};
	int n,m;
	cin >> n >> m;
	cin >> N.first >> N.second;
	cin >> M.first >> M.second;

	for (int i=1;i<=n;i++)
	    for (int j=1;j<=m;j++) d[i][j]=-1;

	q.push(N);
	d[N.first][N.second]=0;
	while (!q.empty()){
	   N=q.front(); q.pop();
	   if (N.first==M.first&&N.second==M.second) break;
	   for (int i=0;i<8;i++){
	      K.first=N.first+x[i];
        K.second=N.second+y[i];
	      if (K.first>0&&K.first<=n&&K.second>0&&K.second<=m)
    	   if (d[K.first][K.second]==-1){
    	      q.push(K);
    	      d[K.first][K.second]=d[N.first][N.second]+1;
    	   }
	    }
	}
	cout << d[M.first][M.second];
}

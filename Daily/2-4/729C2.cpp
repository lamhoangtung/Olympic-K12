#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
  int n,k,s,t;
	cin >> n >> k >> s >> t;
  pair <int, int> cars[200000];
  vector <int> status;
	for (int i=0;i<n;i++) cin >> cars[i].second >> cars[i].first;
	status.push_back(0);
	status.push_back(s);
	for (int i=0;i<k;i++){
		int temp;
		cin >> temp;
		status.push_back(temp);
	}

	sort(status.begin(),status.end());
	vector<int> gaps;
	for (int i=1;i<status.size();i++) gaps.push_back(status[i]-status[i-1]);
	sort(gaps.begin(),gaps.end());
	sort(cars,cars+n);

  s=0;
	int e=n,from=e;
	while (s<e){
		int mid=(s+e)/2;
		bool check=true;
		if(cars[mid].first < gaps.back()) check=false;
		else{
			int temp=0,cap=cars[mid].first;
			for (int i=0;i<gaps.size();i++){
				if (cap>=gaps[i]*2) temp+=gaps[i];
				else{
					int fast=cap-gaps[i];
					int normal=gaps[i]-fast;
					temp+=fast+normal*2;
				}
			}
			if (temp>t) check=false;
		}
		if(check) from=e=mid;
		else s=mid+1;
	}

	int ans=1000000001;
	for (int i=from;i<n;i++) ans=min(ans,cars[i].second);
	if (ans==1000000001) ans=-1;
	cout << ans;
}

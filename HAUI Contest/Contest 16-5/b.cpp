#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  long long n;
  cin >> n;
  vector <long long> x;
	if (n==1){
    cout << 1;
  	return 0;
  }
  if (n==0) {
  	cout << 10;
  	return 0;
  }
  if (n>1000000000||n<0){
    cout << -1;
    return 0;
  }

  while (n!=1){
  	bool kt=true;
  	for (long long i=9;i>=2;i--){
  	   while (n%i==0){
  	      x.push_back(i);
  	      kt=false;
  	      n=n/i;
  	   }
  	}
    if (kt==true){
  	   cout << -1;
  	   return 0;
  	}
  }
  sort(x.begin(),x.end());
  for (long long i=0;i<x.size();i++) cout << x[i];
  return 0;
}

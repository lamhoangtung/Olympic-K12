#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n, sum=0,b; cin>>n;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b=a[0];
	}
	if(b>15){
		cout<<15;
	}
	else{
	
	for(int i=0;i<n;i++){
		
		if(a[i+1]-a[i]<=15){
			sum=a[i+1];
		}
		else if(a[i+1]-a[i]>15){
			sum=a[i];
			break;
		}
		
		
		
	}
	if(sum+15>90){
		cout<<90;
	}
	else{
	
	cout<<sum+15;}
}	
	return 0;
}

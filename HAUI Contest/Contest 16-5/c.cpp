#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,sum=0,sum1=0,sum2=0; cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    int mid=sum/n;
    for(int i=0;i<n;i++){
        if(a[i]<=mid){
           sum1+=(mid-a[i]);
        }
        else{
            sum2+=(a[i]-mid);
        }
    }
    if(sum1==sum2){
        cout<<sum1;
    }
    else{
        cout<<-1;
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
map<int,int> a;
long long z=0;
int main()
{
    int k;cin>>k;
    for(int i=0;i<k;i++)
    {
        int x;cin>>x;
        a[x]++;
    }
    map<int,int>:: iterator it=a.begin();
    for(;it!=a.end();it++)
    {
        if((*it).second>5)
            z+=(*it).second-5+100;
        else
            z+=100;
    }
    cout<<z;
    return 0;
}

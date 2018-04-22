#include <iostream>

using namespace std;

int main(void){
    int n,a[1000000],b[1000000];
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    unsigned long long ans=1;
    for (int i=0;i<m;i++){
        int temp1, temp2;
        cin >> temp1 >> temp2;
        unsigned long long sum=0;
        for (int j=temp1;j<=temp2;j++){
            sum+=a[j];
        }
        ans*=sum;
    }
    cout << ans%(1000000007);
}

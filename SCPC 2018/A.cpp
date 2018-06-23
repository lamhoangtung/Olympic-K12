/*Memory Limit
Runtime : 0.0053 sec
Score : 0 Point(s)


Segmentation fault
(e.g. memory limit Exceed, stack overflow,...*/


#include <iostream>
#include <cmath>
#include <string.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for (int tc=1;tc<=t;tc++){
        int m[100];
        char a[100][100];
        memset(a, 0, sizeof(a));
        memset(m, 0, sizeof(m));
        int n,kk,input[100];
        cin >> n >> kk;
        for (int i=1;i<=n;i++){
            cin >> input[i];
        }
        for (int i=1;i<=n;i++){
            for (int j=i+1;j<=n;j++){
                if (abs(input[j]-input[i])<=kk){
                    a[i][j]=1;
                    a[j][i]=1;
                }
            }
        }
        int kt,sm=0;
        for (int i=1;i<=n;i++)
            if(!m[i]) {
                sm++;
                m[i]=sm;
                for (int j=i+1;j<=n;j++)
                    if((a[i][j]==0)&&(m[j]==0)){
                        kt=1;
                        for (int k=i+1;k<=j;k++)
                            if((a[k][j]==1)&&(m[i]==m[k])){
                                kt=0;
                                break;
                            }
                        if(kt==1) m[j]=sm;
                    }
            }
        cout << "Case #" << tc << "\n";
        cout << sm << "\n";
    }
    return 0;
}

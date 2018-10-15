/*
    Bài toán: Cho n thành phố: 1,2,..,n. 2 người xuất phát từ 2 thành phố p và q, để đi đến điểm hẹn c, sau đó cùng đi đến điểm d, sao cho cho thời
    gian không vượt quá t.
    Tìm thời gian nhỏ nhất.
*/
#include <iostream>
#include <fstream>

using namespace std;

const int N=100;
const float vocung=10000;
int n,p,q,d;
float t;
float a[N][N];
int c,c_min;
float pc,qc,cd,min_kq;

void nhapdl(){
    freopen("data.inp","r",stdin);
    cin >> n >> p >> q >> d >> t;
    for (int i=1;i<n;i++){
        for (int j=i+1;j<=n;j++){
            cin >> a[i][j];
            if (a[i][j]==-1)
                a[i][j]=vocung;
            a[j][i]=a[i][j];
        }
    }
    a[n][n]=vocung;
}

void xuatdulieu(){
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (a[i][j]!=vocung)
                cout << a[i][j] << " ";
            else cout << "-1" << " ";
        }
        cout << endl;
    }
}

void thuchien(){
    for 
}

int main(){
    nhapdl();
    xuatdulieu();
    return 0;
}
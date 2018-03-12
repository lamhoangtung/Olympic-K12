#include <iostream>

using namespace std;

int main(void){
  long long n,h,k;
  cin >> n >> h >> k;
  long long time=0,current=0;
  for (long long i=0;i<n;i++){
    long long temp;
    cin >> temp;
    if (current+temp>h){
      current = 0;
      time++;
    }
    current+=temp;
    time+=current/k;
    current%=k;
  }
  //if (current>0) time+=current;
  time+=(current>0);
  cout << time;
}

//WARNING: THIS IS NOT MY CODE
//JUST FOR TESTING PURPOSES
//CAN'T UNDERSTAND DP DIGIT YET
//P/s: Contest nay e chang nghi duoc gi ca ;(


#include <iostream>
#include <algorithm>
#define memo(a,b) memset((a),(b),sizeof(a))

using namespace std;

long long int p,q,dp[20][2][2];
int a[20],b[20],len;

long long int DP(int pos,int gotSmall, int needSmall){
  if (pos==(len+1)/2){
    if (needSmall) return gotSmall;
    return 1;
  }
  long long int &ret = dp[pos][gotSmall][needSmall];
  if (ret!=-1) return ret;
  if (gotSmall){
    ret = 10*DP(pos+1,1,0);
    return ret;
  }
  ret=0;
  int i,s=(pos==0 && len>1) ? 1 : 0;
  for (i=s;i<a[pos];i++) ret+=DP(pos+1,1,0);
  if (i<a[len-1-pos]) ret+=DP(pos+1,0,0);
  else if (i==a[len-1-pos]) ret+=DP(pos+1,0,needSmall);
  else ret+=DP(pos+1,0,1);
  return ret;
}

long long int solve(long long int p){
  if (p==0) return 1;
  if (p<10) return p+1;
  int idx=0,i;
  while (p){
    b[idx++]=p%10;
    p/=10;
  }
  reverse(b,b+idx);
  long long int ans=0;
  for (i=0;i<idx-1;i++){
    a[i]=9;
    len=i+1;
    memo(dp,-1);
    ans+=DP(0,0,0);
  }
  for (i=0;i<idx;i++){
    a[i]=b[i];
  }
  memo(dp,-1);
  len=idx;
  ans+=DP(0,0,0);
  return ans;
}

int main(){
  long long int p,q;
  cin >> p >> q;
  cout << solve(q) - solve(p-1);
  return 0;
}

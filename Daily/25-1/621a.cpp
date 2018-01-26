#include <iostream>
#include <stdlib.h>

using namespace std;


int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main(void){
 int a[100000],i,n;
 unsigned long long sum;
 cin >> n;
 for (i=0;i<n;i++){
   cin >> a[i];
   sum+=a[i];
 }
 if (sum%2!=0) qsort (a, n, sizeof(int), compare);
 i=0;
 while (sum%2!=0){
   if (a[i]%2!=0) sum-=a[i];
   i++;
 }
 cout << sum;
}

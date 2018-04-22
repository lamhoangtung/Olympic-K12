#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main(void){
  int a[100000];
  for (int i=1;i<100000;i++) a[i]=0;
  a[0]=0;
  a[1]=1;
  for (int i=1;i<100000;i++){
    if (2*i<=100000) a[2*i]=a[i];
    if (2*i+1<100000) a[2*i+1]=a[i]+a[i+1];
  }
  ofstream myfile ("arr2.txt");
  int temp=1,start=1;
  for (int i=3;i<=100000;i++){
    int max=-1;
    for (int j=1;j<=i;j++){
      if (a[j]>max) max=a[j];
    }
    if (max!=temp){
      myfile << "if (n>=" << start << " && n<=" << i-1 << ") ans=" << temp << ";\n";
      start=i;
    }
    temp=max;
  }
}

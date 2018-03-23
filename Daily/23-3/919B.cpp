#include <iostream>

using namespace std;

int sum(int a){
  int s=0;
  while (a!=0){
    s+=a%10;
    a/=10;
  }
  return s;
}

int main(void){
  int n;
  cin >> n;
  int temp=19;
  while (n>1) {
    temp+=9;
    if (sum(temp)==10) n--;
  }
  cout << temp;
}

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void){
  int n,a[99999];
  cout << "Nhap n: ";
  cin >> n;
  srand(time(NULL));
  for (int i=1;i<=n;i++){
    a[i] = rand() % 100;
    cout << a[i] << "  ";
  }
  cout << "\n";
}

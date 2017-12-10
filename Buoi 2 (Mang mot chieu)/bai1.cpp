#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(void){
  int n,a[99999];
  cout << "Nhap n: ";
  cin >> n;
  srand(time(NULL));
  for (int i=1;i<=n;i++){
    a[i] = -999999 + rand() % (-1-(-999999)+1); //Chi ran so am
    //a[i] = rand() % 100; //Ran tu 1 den 99
    cout << a[i] << "  ";
  }
  cout << "\n";
}

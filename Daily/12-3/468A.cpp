#include <iostream>

using namespace std;

int main(void){
  long long n;
  cin >> n;
  if (n<4){
    cout << "NO";
  }
  else if (n%2==0){
    cout << "YES\n";
    cout << "1 * 2 = 2\n";
    cout << "2 * 3 = 6\n";
    cout << "6 * 4 = 24\n";
    for (long long i=6;i<=n;i+=2){
      cout << i << " - " << i-1 << " = 1\n";
      cout << "24 * 1 = 24\n";
    }
  }
  else {
    cout << "YES\n";
    cout << "1 + 5 = 6\n";
    cout << "4 * 6 = 24\n";
    cout << "3 - 2 = 1\n";
    cout << "1 * 24 = 24\n";
    for (long long i=7;i<=n;i+=2){
      cout << i << " - " << i-1 << " = 1\n";
      cout << "24 * 1 = 24\n";
    }
  }
}

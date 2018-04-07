#include <bits/stdc++.h>

using namespace std;

unsigned long long l, r, a, b, c;

int main()
{
    cin >> a >> b >> c;
    l = 0, r = a/2;
    unsigned long long mid;
    while (l < r)
    {
        mid = (l+r)/2;
        if ((3*mid > a+b-c) || mid > b)
            r = mid;
        else l = mid+1;
    }
    for (unsigned long long i = l; i >= 0; i --)
        if (!((3*i > a+b-c) || i > b)){
          cout << i;
          return 0;
        }
    return 0;
}

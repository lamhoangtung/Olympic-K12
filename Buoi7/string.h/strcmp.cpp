#include <iostream>

using namespace std;

int strcmp (const char * s1, const char * s2)
{
    for(; *s1 == *s2; ++s1, ++s2)
        if(*s1 == 0)
            return 0;
    return *(unsigned char *)s1 < *(unsigned char *)s2 ? -1 : 1;
}

int main(void){
  char a[1000],b[1000];
  cin >> a;
  cin >> b;
  cout << strcmp(a,b) << '\n';
}

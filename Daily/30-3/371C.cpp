#include <iostream>
#include <string>

using namespace std;

int main(void){
  long long l=0,r=2e12,m,w,b=0,s=0,c=0,f,pb,ps,pc,nb,ns,nc,x,y,z;
  string ss;
	cin >> ss >> nb >> ns >> nc >> pb >> ps >> pc >> f;
	for (long long i=0;i<ss.length();i++){
	   if (ss[i]=='B') b++;
	   else if (ss[i]=='S') s++;
	   else if (ss[i]=='C') c++;
  }

	while (r-l>1){
	   m=(l+r)/2;
	   if (b*m-nb<0) x=0; else x=b*m-nb;
	   if (s*m-ns<0) y=0; else y=s*m-ns;
	   if (c*m-nc<0) z=0; else z=c*m-nc;
	   w=x*pb+y*ps+z*pc;
	   if(w<=f) l=m; else r=m;
	}
	cout << l;
}

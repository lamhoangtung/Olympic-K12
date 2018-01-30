#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<bool> alphabets(28,0);
    for (int i=0;i<n;i++){
    	alphabets[tolower(s[i])-'a']=1;
    }
    for (int i=0;i<26;i++){
    	if(alphabets[i]==0)
    	{
    		cout <<"NO\n";
    		return 0;
    	}
    }
    cout <<"YES\n";
    return 0;
}

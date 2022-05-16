#include <iostream>
using namespace std ;
void solve()
{
    int a=0,b=0,c=0;
    string s ;
    cin >> s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='A') a+=1;
        else if(s[i]=='B') b+=1;
        else if(s[i]=='C') c+=1;
    }
    if(b == a+c){
        cout << "YES\n" ;
    }
    else{
        cout << "NO\n" ;
    }
}
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t ;
    cin >> t ;
    while(t--){
        solve();
    }
    return 0;
}
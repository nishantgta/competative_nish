#include <iostream>
#include <algorithm>
using namespace std ;
void solve()
{
    int n,i,ans=0; cin >> n ;
    string s ; cin >> s ;
    string temp=s;
    sort(temp.begin(),temp.end());
    for(i=0;i<n;i++){
        if(s[i]!=temp[i]){
            ans+=1;
        }
    }
    cout << ans << "\n";
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
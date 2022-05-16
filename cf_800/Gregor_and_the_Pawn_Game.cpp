#include <iostream>
using namespace std ;
void solve()
{
    int n,ans=0;
    cin >> n ;
    string e,g;
    cin >> e;
    cin >> g;
    for(int i=0;i<n;i++){
        if(g[i]=='1'){
            if(e[i]=='0'){
                ans++;
            }
            else if(e[i-1]=='1'){
                ans++;
                e[i-1]='1';
            }
            else if(e[i+1]=='1'){
                ans++;
                e[i+1]='1';
            }
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
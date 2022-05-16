#include <iostream>
using namespace std ;
void solve()
{
    int n,i,sum=0,k,ans=0; cin >> n ;
    int a[n];
    for(i=0;i<n;i++) {cin >> a[i];sum+=a[i];}
    if((sum%n)!=0){
        cout << -1 << "\n"; return ;
    }
    else{
        k=sum/n ;
        for(i=0;i<n;i++){
            if(a[i]>k)ans+=1;
        }
        cout << ans << "\n";
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
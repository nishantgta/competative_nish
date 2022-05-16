#include <iostream>
using namespace std ;
void solve()
{
    int n,i,maxa,mina; cin >> n ;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    maxa = a[0];
    mina = a[0];
    for(int i=0;i<n;i++){
        if(a[i]>maxa){
            maxa = a[i];
        }
        if(a[i]<mina){
            mina = a[i];
        }
    }
    cout << (maxa-mina) << "\n" ;
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
#include <iostream>
using namespace std ;
void solve(){
    int n,i,nodd=0,neven=0; cin >> n ;
    int a[2*n];
    for(i=0;i<2*n;i++){
        cin >> a[i];
        if(a[i]%2==1) nodd++;
        else if(a[i]%2==0) neven++;
    }
    if(nodd == neven){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t ;
    while(t--){
        solve() ;
    }
    return 0;
}
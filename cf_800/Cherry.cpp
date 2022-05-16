#include <iostream>
#include <vector>
using  namespace std ;

void solve(){
    int n,i; cin >> n ;
    long long a[n];
    for(i=0;i<n;i++) cin >> a[i] ;
    long long int max_pos=0,maxa=a[0], pro=a[0]*a[1];
    for(i=0;i<n-1;i++){
        if(a[i]*a[i+1]>pro){
            pro=a[i]*a[i+1];
        }
    }
    cout << pro << "\n" ;
}

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t ;
    while(t--){
        solve();        
    }
    return 0;
}
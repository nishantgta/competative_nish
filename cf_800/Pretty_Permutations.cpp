#include <iostream>
using namespace std ;
void solve(){
    int n, i;
    cin >> n ;
    if(n%2==0){
        for(int i=1;i<=n;i++)
        {
            if(i%2 == 0)
            {
                cout << (i-1) << " " ;
            }
            else {
                cout << (i+1) << " " ;
            }
        }
        cout << "\n";
    }
    else{
        for(int i=1;i<=n-3;i++)
        {
            if(i%2 == 0)
            {
                cout << (i-1) << " " ;
            }
            else {
                cout << (i+1) << " " ;
            }
        }
        cout << n << " " << n-2 << " " << n-1 << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t ;
    while(t--){
        solve();
    }
    return 0;
}
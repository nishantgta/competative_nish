#include <iostream>
using namespace std ;
void solve(){
    int n,i,x;
    long long int sum=0;
    cin >> n >> x ;
    if(n*x - n*(n-1)/2 >=-1000 && n*x - n*(n-1)/2 <= 1000){
        for(i=1;i<=n-1;i++){
            cout << i << " ";
            sum+=i;
        }
        cout << (long long int)n*x-sum << "\n";
    }
    else{
        
    }
}
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,x;
    cin >> t ;
    while(t--){
        solve();
    }
    return 0;
}
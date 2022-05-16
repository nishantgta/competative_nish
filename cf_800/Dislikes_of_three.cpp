#include <iostream>
using namespace std ;
int god[15000];

void solve(){
    int k;
    cin >> k ;
    cout << god[k-1] << "\n" ;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,j=0;
    for(i=1;i<=15000;i++){
        if(i%3==0 || i%10==3){
            continue;
        }
        god[j]=i;
        j++;
    }
    int t;
    cin >> t ;
    while(t--){
        solve();
    }
    return 0;
}
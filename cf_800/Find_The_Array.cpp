#include <iostream>
#include <vector>
using  namespace std ;
void solve(){
    int n,s=1;
    vector <int> yo ;
    cin >> n ;
    while(n>0){
        yo.push_back(s);
        n=n-s;
        s+=2;
    }
    if(yo.size()!=0 && yo[yo.size()-1]==n){
        cout << yo.size()-1 << "\n" ;
    }
    else{
        cout << yo.size() << "\n" ;
    }
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
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
void solve(){
    int n, i, maxa,lol,max_pos;
    double sum=0.0,ans;
    cin >> n ;
    vector <int> a;
    for(i=0;i<n;i++){
        cin >> lol;
        a.push_back(lol);
    }
    maxa = a[0];
    max_pos = 0;
    for(i=0;i<n;i++){
        if(maxa < a[i]){
            maxa = a[i];
            max_pos = i;
        }
    }
    for(i=0;i<n;i++){
        if(i!=max_pos){
            sum+=a[i];
        }
    }
    ans=maxa+(sum)/(double)(n-1) ;
    printf("%0.9f\n",ans) ;
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
#include <iostream>
using namespace std ;
void solve()
{
    int i,j,ans=0;
    string s ;
    cin >> s ;
    int n=s.length();
    int hash[26]={0};
    for(i=0;i<n;i++){
        hash[s[i]-'a']++;
    }
    for(i=0;i<26;i++){
        if(hash[i]<=2){
            ans+=hash[i];
        }
        else if(hash[i]>2){
            ans+=2;
        }
    }
    cout << ((ans%2==0)?ans/2:(ans-1)/2) << endl;
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
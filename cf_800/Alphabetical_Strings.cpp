#include <iostream>
#include <algorithm>
#include <deque>
using namespace std ;
void solve()
{
    string s,ans="",alpha="";
    cin >> s;
    int n=s.length(),i,flag=0,head,tail;
    deque <char> yo;
    for(i=0;i<n;i++){
        yo.push_back(s[i]);
        alpha+=(i+'a');
    }
    for(i=1;i<=n;i++){
        head = yo.front();
        tail = yo.back();
        if(head<tail){
            ans+=yo.back();
            yo.pop_back();
        }
        else if(tail<head){
            ans+=yo.front();
            yo.pop_front();
        }
    }
    ans+=yo.front();
    reverse(ans.begin(),ans.end());
    if(ans.compare(alpha)==0){
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
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
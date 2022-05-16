#include <iostream>
#include <math.h>
using namespace std ;
void solve()
{
    int k; cin >> k ;
    int row = round(sqrt(k));
    cout << row << "\n";
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
#include <iostream>
using namespace std;
void solve()
{
    int n;
    cin >> n ;
    if(n%10 == 9){
        cout << n/10 + 1 << "\n";
    }
    else{
        cout << n/10 << "\n";
    }
    return ;
}

int main()
{
    int t;
    cin >> t ;
    while(t--){
        solve();
    }
    return 0;
}
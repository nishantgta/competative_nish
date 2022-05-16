#include <iostream>
#include <math.h>
using namespace std ;
void solve()
{
    int a,b,c,p1,p2 ;
    cin >> a >> b >> c ;
    int dia = abs(a-b),max_num;
    max_num = 2*dia ;
    if(max_num<c){
        cout << -1 << "\n" ;
    }
    else if(c-dia >= 1 && c-dia != a && c-dia != b){
        cout << c-dia << "\n"; 
    } 
    else if(c+dia <= max_num && c+dia != a && c+dia != b){
        cout << c+dia << "\n" ;
    }
    else {
        cout << -1 << "\n";
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
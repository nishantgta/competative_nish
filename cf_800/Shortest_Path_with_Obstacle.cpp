#include <iostream>
using namespace std ;
void solve(){
    int xa,ya,xb,yb,xf,yf,val ;
    cin >> xa >> ya ;
    cin >> xb >> yb ;
    cin >> xf >> yf ;
    if(xa==xb && xb==xf && xf==xa){
        if(yf<=ya && yf >= yb){
            cout << ya-yb+2 << "\n" ; 
        }
        else if(yf <= yb && yf >= ya){
            cout << yb-ya+2 << "\n" ;            
        }
        else{
            cout << max(ya,yb)-min(ya,yb) << "\n" ;
        }
    }
    else if(ya==yb && yb==yf && yf==ya){
        if(xf<=xa && xf >= xb){
            cout << xa-xb+2 << "\n" ; 
        }
        else if(xf <= xb && xf >= xa){
            cout << xb-xa+2 << "\n" ;            
        }
        else{
            cout << max(xa,xb)-min(xa,xb) << "\n" ;
        }
    }
    else{
        cout << abs(xa-xb)+abs(ya-yb) << "\n" ;
    }
}

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin >> t ;
    while(t--){
        solve();
    }
    return 0;
}
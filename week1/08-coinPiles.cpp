#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void sol(){
    ll x,y;
    cin >> x >> y;
    if((x+y)%3!=0){
        cout << "NO\n";
        return;
    }
    if(x < (x+y)/3 || y < (x+y)/3){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
}
 
int main(){
    ll t;
    cin >> t;
    while(t--) sol();
}
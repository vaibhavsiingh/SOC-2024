#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void sol(){
    ll n;
    cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll sum=0;
    for(ll i = 1; i < n; i++) {
        if(a[i]<a[i-1]) {sum -= a[i]-a[i-1]; a[i]=a[i-1];}
    }
    cout << sum;
 
}
 
    
 
int main(){
    sol();
    return 0;
}
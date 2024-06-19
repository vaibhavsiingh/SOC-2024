#include<bits/stdc++.h>
using namespace std;typedef int64_t ll;typedef vector<ll> vll;typedef pair<ll,ll> pll;
#define pb push_back
#define pob pop_back
#define ff first				
#define ss second 
#define sz size	
#define reach cout<<"Reached"<<endl; 
#define o1(a) cout<<a<<"\n"
#define o2(a,b) cout << a << ' ' << b << "\n"; 
#define iArray(a,n) for(ll i=0; i<n; i++) cin >> a[i]; 
#define i2(a,b) cin >> a >> b;

void sol(){
    ll n,m;
    i2(n,m);
    ll a[m][n];
    for(ll i = 0; i < n; i++) {
        for(ll j=0; j<m; j++){
            cin >> a[j][i];
        }
    }
    // for(ll i = 0; i < m; i++) {
    //     for(ll j = 0; j < n; j++) {
    //         cout << a[i][j];
    //     }
    //     cout << "\n";
    // }
    ll ans=0;
    for(ll i = 0; i < m; i++) {
        sort(a[i],a[i]+n);
        ll sum=0;
        for(ll j=0; j<n; j++){
            sum+=a[i][j];
            ans += (j+1)*a[i][j]-sum;
        }        
    }
    o1(ans);

}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    for(ll i = 0; i < t; i++) {
        sol();
    }
}

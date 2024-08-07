#include <bits/stdc++.h>
using namespace std;

typedef int64_t ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

#define pb push_back
#define pob pop_back
#define ff first
#define ss second
#define sz size
#define reach cout << "Reached" << endl;
#define o1(a) cout << a << "\n"
#define o2(a, b) cout << a << ' ' << b << "\n";
#define iArray(a, n) for (ll i = 0; i < n; i++) cin >> a[i];
#define i2(a, b) cin >> a >> b;

const ll MOD = 1000000007;

pair<ll,ll> limits(ll a,ll b, ll n){
    pair<ll,ll> ans;
    if(n==1){
        ans.ff=0;
        ans.ss=a; 
    }
    else{
        ans.ff = (n-2)*(a-b) + a;
        ans.ss = (n-1)*(a-b) + a;
    }
    return ans;
}

void sol(){
    ll q;
    cin >> q;
    while(q--){
        ll p;
        cin >> p;
        ll l=0,r=1e18;
        if(p==1){
            ll a,b,n;
            cin >> a >> b >> n;
            pll p = limits(a,b,n);
            if( p.ss < l || p.ff > r){
                cout << 0 << ' ';
                continue;
            }
            cout << 1 << ' ';
            l = p.ff;
            r = p.ss;
        }
        else{
            ll a,b;
            cin >> a >> b;
            ll min_days, max_days;
            
            if(l <= a){
                min_days = 1;
            } else {
                min_days = (l - a + (a - b) - 1) / (a - b) + 1;
            }
            
            if(r <= a){
                max_days = 1;
            } else {
                max_days = (r - a + (a - b) - 1) / (a - b) + 1;
            }
            
            if(min_days != max_days) cout << -1 << ' ';
            else cout << min_days << ' ';
        }
    }
    cout << "\n";
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

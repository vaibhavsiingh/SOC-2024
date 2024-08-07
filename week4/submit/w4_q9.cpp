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
const ll INF = 1e18; // A large value for upper bound

void sol(){
    ll n;
    cin >> n;
    ll lower = 1, upper = INF;
    
    for(ll i = 0; i < n; i++) {
        ll q;
        cin >> q;
        
        if(q == 1){
            ll a, b, days;
            i2(a, b);
            cin >> days;
            
            bool valid = true;
            if(days == 1){
                if(lower <= a && upper >= a) {
                    lower = max(lower, 1LL);
                    upper = min(upper, a);
                } else {
                    valid = false;
                }
            } else {
                ll newLow = (days - 2) * (a - b) + a + 1;
                ll newHigh = (days - 1) * (a - b) + a;
                
                if(newHigh < lower || newLow > upper) {
                    valid = false;
                } else {
                    lower =  newLow;
                    upper =  newHigh;
                }
            }
            
            if(valid) cout << 1 << ' ';
            else cout << 0 << ' ';
        }
        else {
            ll a, b;
            i2(a, b);
            
            ll min_days, max_days;
            
            if(lower <= a){
                min_days = 1;
            } else {
                min_days = (lower - a + (a - b) - 1) / (a - b) + 1;
            }
            
            if(upper <= a){
                max_days = 1;
            } else {
                max_days = (upper - a + (a - b) - 1) / (a - b) + 1;
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

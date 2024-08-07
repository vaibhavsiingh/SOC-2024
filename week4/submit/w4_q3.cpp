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

void sol(vector<ll> v){
    ll a,b;
    i2(a,b);
    if(v.size()-1<a){
        ll start = v.size();
        while(start-1 < a){
            v.push_back(v[start-1]*start);
            start++;
        }
    }
    o1((((v[a])/(v[b]))/v[a-b])%MOD);

}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    vector<ll> v;
    v.push_back(1);
    v.push_back(1);
    for(ll i = 0; i < t; i++) {
        sol(v);
    }
}

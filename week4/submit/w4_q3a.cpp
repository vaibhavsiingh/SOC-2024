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

ll sol(ll a, ll b, vector<vector<ll>> dp){
    if(dp[a][b]>0) return dp[a][b];
    ll ans = sol(a-1,b-1,dp) + sol(a-1,b,dp)%MOD;
    dp[a][b] = ans;
    return ans;
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;

   vector<ll> ak(largest+1); 
    vector<vector<ll>> dp(largest+1, ak);
    for(ll i=0; i<=largest; i++){
        dp[i][0]= 1;
        dp[i][i] = 1;
    }
    for(auto c:v){
        ll ans = sol(c.ff,c.ss,dp);
        o1(ans);
    }

}

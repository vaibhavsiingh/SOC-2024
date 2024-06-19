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
    ll n,x;
    i2(n,x);
    vector<ll> a(x);
    for(ll i = 0; i < x; i++) {
        cin >> a[i];
    }

    vector<ll> dp(n+1,1e12);
    dp[0] = 0;
    for(ll i = 0; i < x; i++) {
        dp[a[i]]=0;
    }
    for(ll i = 0; i <= n; i++) {
        for(ll j=a.size()-1; j>=0&&i-a[j]>=0; j--){
            if(dp[i]<=dp[i-a[j]]+i){
                dp[i]=dp[i-a[j]]+i;
                a.pb(i); 
            }
            //dp[i] = min(dp[i],dp[i-a[j]]+i);
        }
    }
    cout << dp[n];
    // for(ll i = 0; i < n+1; i++) {
    //     cout << dp[i] << ' ';
    // }

}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}

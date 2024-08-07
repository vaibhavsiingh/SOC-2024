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
#define oArray(a,n) for(ll i=0; i<n; i++) cout << a[i] << ' '; cout << endl;

const ll MOD = 1000000007;

bool dfs(int s, vll& visited, vector<vll> adj, vll& route, ll last, ll& count) {
    if (s==last){
        return 0;
    }
    else if(visited[s]){
        route.pb(s);
        return 1;
    }
    count++;
    visited[s] = true;
    route.pb(s);
    for (auto u: adj[s]) {
        bool ans = dfs(u, visited, adj, route, last, count);
        if(ans) return 1;
    }
    return 0;
}


void sol(){
    ll n,m;
    i2(n,m);
    vector<vll> adj(n+1,vector<ll>(0));
    for(ll i = 0; i < m; i++) {
        ll a,b;
        i2(a,b);
        adj[a].pb(b);
        adj[b].pb(a);
    }
    vector<ll> visited(n+1,0);
    vll route = {};
    ll count =0;
    while(count < n){
        ll ptr = 1;
        while(visited[ptr]) ptr++;
        route ={};
        for(auto c: adj[ptr]){
            bool ans = dfs(c, visited, adj, route, ptr,count);
            if(ans){
                oArray(route, route.size());
                return;
            }
        }
    }
    

}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}

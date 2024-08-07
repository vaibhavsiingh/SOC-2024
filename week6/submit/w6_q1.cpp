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

bool sorter(pll a, pll b){
    return a.ss < b.ss;
}

void sol(){
    ll n,m,k;
    i2(n,m);
    cin >> k;
    vector<vll> adj(n+1,vector<ll>(0));
    for(ll i = 0; i < m; i++) {
        ll a,b;
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    vector<pll> g;
    for(ll i = 0; i < k; i++) {
        ll p,h;
        cin >> p >> h;
        g.pb({p,h});
    }
    sort(g.begin(),g.end(),sorter);
    unordered_set<ll> gaurded;
    for(auto p:g){
        vector<ll> visited(n+1,0);
        gaurded.insert(p.ff);
        queue<ll> q;
        vll distance(n+1,0);
        visited[p.ff] = 1;
        q.push(p.ff);
        while(!q.empty()){
            int s =q.front();
            //o2("checking", s);
            q.pop();
            // process node
            for(auto c:adj[s]){
                //o2("neighboors", c);
                if(visited[c]) continue;
                if(gaurded.count(c)) continue;
                if(distance[s]+1>p.ss) break;
                visited[c]=1;
                gaurded.insert(c);
                q.push(c);
               // o2("pushing",c);
                distance[c] = distance[s]+1;
            }
        }
    }
    o1(gaurded.size());
    for(ll i = 1; i <= n; i++) {
        if(gaurded.count(i)) cout << i << ' ';
    }


}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}

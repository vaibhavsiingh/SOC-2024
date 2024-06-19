// nested ranges count

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
#define inArray(a,n) for(ll i=0; i<n; i++) cin >> a[i]; 

bool compare(pair<pair<ll,ll>,ll> a, pair<pair<ll,ll>,ll> b){
    if(a.ff.ff==b.ff.ff) return a.ff.ss > b.ff.ss;
    return a.ff.ff < b.ff.ff;
}

void sol(){
    ll n;
    cin >> n;
    pair<pair<ll,ll>,ll> p;
    for(ll i = 0; i < n; i++) {
        cin >> p.ff.ff >> p.ff.ss;
        p.ss = i;
    }

}


int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}

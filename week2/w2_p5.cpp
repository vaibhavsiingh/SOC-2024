// rook defenders

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
#define i2(a,b) cin >> a >> b;

void sol(){
    ll n,q;
    i2(n,q);
    vector<pair<ll,ll>> v;
    for(ll i = 0; i < q; i++) {
        ll t;
        cin >> t;
        if(t==1){
            ll x,y;
            i2(x,y);
        }
        if(t==2){
            ll x,y;
            i2(x,y);
            //v.erase({x,y});
        }
        if(t==3){
            ll x1,x2,y1,y2;
            i2(x1,y1);
            i2(x2,y2);
            bool x[x2-x1+1], y[y2-y1+1];
            for(ll i = 0; i < n; i++) {
          //      if(v[])
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

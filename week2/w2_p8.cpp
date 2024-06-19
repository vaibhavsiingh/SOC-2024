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

vector<ll> a3sum(vector<pair<ll,ll>> v, ll i, ll x){
    ll sum = v[i].ff,n=v.size(),p1=i+1,p2=i+2,p3=n-1;
    while(p1<n-2){
        if(sum+v[p1].ff+v[p1+1].ff+v[p1+1].ff>x) return {-1};
        vector<ll> ans;
        while(p2<p3){
            if(sum+v[p1].ff+v[p2].ff+v[p3].ff>x){
                p3--;
            }
            else if(sum+v[p1].ff+v[p2].ff+v[p3].ff<x){
                p2++;
            }
            else{
                ans.pb(v[p1].ss);
                ans.pb(v[p2].ss);
                ans.pb(v[p3].ss);
                return ans;
            }
        }
        p1++;
        p2=p1+1;
        p3=n-1;
    }
    return {-1};

}

void sol(){
    ll n,x;
    i2(n,x);
    vector<pair<ll,ll>> v(n);
    for(ll i = 0; i < n; i++) {
        cin >> v[i].ff;
        v[i].ss = i;
    }
    sort(v.begin(), v.end());
    if(n<4){
        o1("IMPOSSIBLE");
        return;
    }
    if(x<v[0].ff+v[1].ff+v[2].ff+v[3].ff || x>v[n-1].ff+v[n-2].ff+v[n-3].ff+v[n-4].ff){
        o1("IMPOSSIBLE");
        return;
    }
    for(ll i = 0; i < n-3; i++) {
        vector<ll> ans=  a3sum(v,i,x);
        if(ans[0]!=-1){
            cout << v[i].ss+1 << ' '  <<ans[0]+1 << ' ' << ans[1]+1 << ' ' << ans[2]+1;
            return;
        }
    }
    cout << "IMPOSSIBLE";
    

}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}

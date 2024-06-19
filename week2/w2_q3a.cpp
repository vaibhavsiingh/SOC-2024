

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
#define o3(a,b,c) cout << a << ' ' << b <<' ' << c <<"\n"; 
#define i1(a) cin >> a;
#define i2(a,b) cin >> a >> b;

void sol(){
    ll n,x;
    i2(n,x);
    vector<pair<ll,ll>> v(n);
    for(ll i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i+1;

    }
    if(n<3){
        o1("IMPOSSIBLE");
        return;
    }
    sort(v.begin(),v.end());
    if(x<v[0].first+v[1].first+v[2].first) {
        o1("IMPOSSIBLE");
        return;
    }
    if(x>v[n-1].first+v[n-2].first+v[n-3].first){
        o1("IMPOSSIBLE");
        return;
    }
    ll p1=0,p2=1,p3=n-1;
    while(p1<n-2){
        if(v[p1].first + v[p3-1].first+v[p3].first < x){
            p1++;
            p2 = p1+1;
            continue;
        }
        while(p2<p3){
            if(v[p1].first+v[p2].first+v[p3].first==x){
                o3(v[p1].second,v[p2].second,v[p3].second);
                return;
            }
            if(v[p1].first+v[p2].first+v[p3].first<x) p2++;
            else p3--;
        }
        p1++;
        p2=p1+1;
        p3=n-1;
    }
    o1("IMPOSSIBLEaa");

    
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}

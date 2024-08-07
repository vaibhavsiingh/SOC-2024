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

ll sum(ll n){
    ll sum = 0;
    ll md = 1000000007;
    for(ll i=1; i*i<=n; i++){
        if(n%i==0){
        ll num = n/i;
        sum += i;
        sum %= md;
        if(num != i) sum += num;
        sum %= md;
        }
    }
    return sum;
}


void sol(){
    ll n;
    cin >> n;
    ll md = 1000000007;
   
    vector<pair<ll,ll>> a(n+1);
    a[0]={0,0};
    a[1]={0,1};
    a[2]={1,3};
    ll ans = 4;
    if(n==1){o1(1); return;}
    
    for(ll i = 3; i <= n; i++) {
        if(i%2==1){
            ll addi = sum(i);
           ans %= md;
            ans += addi;
            a[i] = {0,addi};
        }  
        else{
            ll prev = a[i/2].ss;
            ll fac = a[i/2].ff;
            ll addi = prev*((1<<(fac+2))-1);
            if(fac != 0) addi /= ((1<<(fac+1))-1);
            addi %= md;
            a[i] = {fac+1,addi};
            ans += addi;
        }
        ans %= md;
    }
    
    // for(ll i = 0; i < n+1; i++) {
    //     o2(a[i].ff, a[i].ss);
    // }
    o1(ans);

}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}

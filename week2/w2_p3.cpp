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

void sol(){
    ll n,k,max=0,l=0,r=0;
    cin >> n >> k;
    ll a[n];
    inArray(a,n);
    ll p1=0,p2=0,count=0;
    unordered_map<ll,ll> m;
    while(p2<n){
      //  o2(p1,p2);
        if(m[a[p2]]==0){
            m[a[p2]]++;
            p2++;
            count++;
        }
        else{
            m[a[p2]]++;
            p2++;
        }
        if(count>k){
            while(count>k){
                //o2(p2,a[p1]);
                m[a[p1]]--;
               // o2(m[a[p1]],a[p1]);
                if(m[a[p1]]==0) count--;
                p1++;
            }
        }
        if(p2-p1>max){
            max = p2-p1;
            l = p1;
            r=p2;
        }
    }
    o2(l+1,r);


}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}

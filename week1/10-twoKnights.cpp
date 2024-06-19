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

ll sol(ll k, ll prev){
    ll rest = (((k-1)*(k-1)-1)*(k-1)*(k-1))/2 - prev + (2*k-1)*4 -12;
    return ((k*k)*(k*k-1))/2 -rest;
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin >> n;
    ll prev = 96;
    for(ll i = 1; i <= n; i++) {
        if(i==1) o1("0");
        else if(i==2) o1("6");
        else if(i==3) o1("28");
        else if(i==4) o1("96");
        else if(i>=5){
            prev =  sol(i,prev);
            o1(prev);
        }
    }
}

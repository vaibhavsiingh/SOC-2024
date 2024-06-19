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
    ll n;
    string s;
    i2(n,s);
    if(n%2==1){
        o1(-1);
        return;
    }
    ll cand=s[0], ptr=1,count=1;
    while(ptr<s.size()){
        if(s[ptr]==cand) count++;
        else count--;
        if(count <0) {cand = s[ptr]; count=1;}
        ptr++;
    }
    count = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]==cand) count++;
    }
    if(count > (s.size()+1)/2){
        o1(-1);
        return;
    }
    ll ptr1=0,ptr2=n-1;
    unordered_map<char,ll> m;
    while(ptr1<ptr2){
        if(s[ptr1]==s[ptr2]) m[s[ptr1]]++;
        ptr1++;
        ptr2--;
    }
    if(m.size()==0){
        o1(0);
        return;
    }
    ll maxi = m.begin()->second;
    auto itr = m.begin(),save = m.begin();
    while(itr!=m.end()){
        if(itr->second>maxi){
            maxi = itr->second;
            save = itr;
        } 
        itr++;
    }
    itr = m.begin(); ll sum=0;
    while(itr!=m.end()){
        if(itr!=save){
            sum += itr->second;
        }
        itr++;
    }
    if(sum > save->second){
        o1((sum+save->second+1)/2);
        return;
    }
    else{
        o1(save->second);
    }
    
    
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    for(ll i = 0; i < t; i++) {
        sol();
    }
}

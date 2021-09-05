#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isPower(ll x, ll y){
    ll res1 = log(y) / log(x);
    double res2 = log(y) / log(x);
    
    return (res1 == res2);
}

bool compare(int a, int b){
    string x=to_string(a),y=to_string(b);
    string one=x+y,two=y+x;
    if(one>two){
        return 1;
    }
    return 0;
}


int main() {
    fastio();
    int t=0;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        ll a[n];
        for(ll i=0;i<n;i++) cin>>a[i];
        map<ll,ll> mp;
        for(ll i=0;i<n;i++) mp[a[i]]++;
        if(x==0){
            ll max=0;
            for(auto i:mp){
                if(i.second>max){
                    max=i.second;
                }
            }
            cout<<max<<" 0\n";
        } else {
            map<ll,ll> b;
            for(ll i=0;i<n;i++){
                ll y=a[i]^x;
               //mp[y]++;
                b[y]++;
            }
            ll max=0,op=0;
            for(ll i=0;i<n;i++){
               if(mp[a[i]]+b[a[i]]>max){
                   max=mp[a[i]]+b[a[i]];
                   op=b[a[i]];
               } else if(mp[a[i]]+b[a[i]]==max){
                   op=min(op,b[a[i]]);
               }
            }
            cout<<max<<" "<<op<<"\n";
        }
    }
    return 0;
}

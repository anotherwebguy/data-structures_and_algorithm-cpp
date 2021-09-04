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
        int n;
        cin>>n;
        int a[n];
        int e=0,o=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0) e++;
            else o++;
        }
        int ans=0;
        if(n%2==0){
            if(e>=n/2){
                ans+=n/2;
            } else {
                ans+=e;
            }
            if(o>=n/2){
                ans+=n/2;
            } else {
                ans+=o;
            }
            
        } else {
            if(e>n/2){
                ans+=n/2+1;
            } else {
                ans+=e;
            }
            if(o>=n/2){
                ans+=n/2;
            } else {
                ans+=o;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}


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

int binsearch(int *a,int l,int h,int x){
    while(l<=h){
        int m=(l+h)>>1;
        if(a[m]==x) return m;
        else if(a[m]<x) l=m+1;
        else h=m-1;
    }
    return -1;
}


int main() {
    fastio();
    int t=0;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            v.push_back(make_pair(x,y));
        }
        sort(v.begin(),v.end());
        int idx=0;
        for(int i=1;i<n;i++){
            if(v[idx].second>=v[i].first){
                v[idx].second=max(v[idx].second,v[i].second);
            } else {
                idx++;
                v[idx]=v[i];
            }
        }
        while(q--){
            int l;
            cin>>l;
            int ans=-1;
            for(int i=0;i<=idx;i++){
                if((v[i].second-v[i].first+1)>=l){
                    ans=v[i].first+l-1;
                    break;
                } else {
                    l-=v[i].second-v[i].first+1;
                }
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}

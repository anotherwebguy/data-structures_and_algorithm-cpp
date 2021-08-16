
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
    int t=1;
   // cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        sort(a,a+n);
        int q;
        cin>>q;
        while(q--){
            int x;
            cin>>x;
            if(x<=a[n-1]){
                x=binsearch(a,0,n-1,x);
                while(x<n){
                    if(a[x+1]==a[x]){
                        x++;
                    } else {
                        break;
                    }
                }
                int tsum=0;
                for(int i=0;i<x;i++){
                    tsum+=a[i];
                }
                cout<<x<<" "<<tsum<<"\n";
            } else {
                cout<<n<<" "<<sum<<"\n";
            }
        }
    }
    return 0;
}

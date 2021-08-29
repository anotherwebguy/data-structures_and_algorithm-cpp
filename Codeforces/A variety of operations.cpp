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
        int a,b;
        cin>>a>>b;
        if(a==0 && b==0){
            cout<<"0\n";
        } else if(a==b){
            cout<<"1\n";
        } else if((abs(a-b))%2!=0){
            cout<<"-1\n";
        } else {
            cout<<"2\n";
        }
    }
    return 0;
}

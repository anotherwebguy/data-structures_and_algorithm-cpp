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
    int t=1;
   // cin>>t;
    while(t--)
    {
        string s,t,u;
        cin>>s>>t>>u;
        if(s!="ABC" && t!="ABC" && u!="ABC") cout<<"ABC";
        else if(s!="ARC" && t!="ARC" && u!="ARC")cout<<"ARC";
        else if(s!="AGC" && t!="AGC" && u!="AGC")cout<<"AGC";
        else cout<<"AHC";
    }
    return 0;
}

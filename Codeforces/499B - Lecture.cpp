#include <bits/stdc++.h>
using namespace std;
int main(){
  int n , k; cin >> n >> k; pair<string,string>p[k];
  for(int i = 0 ; i < k ; i++) cin >> p[i].first >> p[i].second;
  string ans = "" ,s;
  while(n--){
    cin >> s;
    for(int i = 0; i < k ; i++){
        if(s==p[i].first){
            if(p[i].first.size() <= p[i].second.size()) ans+=p[i].first;
            else ans+=p[i].second;
            ans+=" "; break;
        }
    }
  }
  return cout << ans , 0;
}

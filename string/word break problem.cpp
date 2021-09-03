unordered_map<string,bool> dp;
bool wordbreak(string a,vector<string> b) {
    int n=a.size();
    if(a==0) return true;
    if(dp[a]==1) return dp[a];
    for(int i=1;i<=n;i++){
        int f=0;
        string s=a.substr(0,i);
        for(int i=0;i<b.size();i++){
            if(ss.compare[b[i]]==0){
                f=1;
                break;
            }
        }
        if(f==1 && wordbreak(s.substr(i,n),b)==1) return dp[a]=true;
    }
    return dp[a]=false;
}

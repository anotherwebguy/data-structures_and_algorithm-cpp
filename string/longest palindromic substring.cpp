
string longestpalin(string s) {
    int n=s.length();
    bool dp[n][n];
    memset(dp,0,sizeof(dp));
    int maxlength=1;
    for(int i=0;i<n;i++){
        dp[i][i]=true;
    }
    int start=0;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            dp[i][i+1]=true;
            start=i;
            maxlength=2;
        }
    }
    for(int k=3;k<=n;k++){
        for(int i=0;i<n-k+1;i++){
            int j=i+k-1;
            if(dp[i+1][j-1] && s[i]==s[j]){
                dp[i][j]=true;
                if(k>maxlength){
                    maxlength=k;
                    start=i;
                }
            }
        }
    }
    string ans=s.substr(start-1,maxlength );
    return ans;
}

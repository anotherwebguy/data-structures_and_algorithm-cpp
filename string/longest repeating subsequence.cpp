
int longestrepeatingsubsequence(string s) {
    vector<vector<int>> dp(n+1,(n+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(s[i]==s[j] && i!=j){
                dp[i][j]=1+dp[i-1][j-1];
            } else {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[n][n];
}

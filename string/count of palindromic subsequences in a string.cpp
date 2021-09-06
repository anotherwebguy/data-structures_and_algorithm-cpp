
int palcount(string s) {
    int n=s.size();
    int dp[n+1][n+1];
    for(int i=0;i<n;i++){
        dp[i][i]=1;
    }
    for(int k=2;k<=n;k++){
        for(int i=0;i<n-k;i++){
            int l=i+k-1;
            if(s[i]==s[l]){
                dp[i][l]=dp[i][l-1]+dp[i+1][l]+1;
            } else {
                dp[i][l]=dp[i][l-1]+dp[i+1][l]-dp[i+1][k-1];
            }
        }
    }
    return dp[0][n-1];
}


int editdistance(string a,string b) {
    int m=a.size(),n=b.size();
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0){
                dp[i][j]=j;
            } else if(j==0){
                dp[i][j]=i;
            } else if(a[i]==b[j){
                dp[i][j]=dp[i-1][j-1];
            } else {
                dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
            }
        }
    }
    return dp[m][n];
}

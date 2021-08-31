#define INF INT_MAX;

vector<int> solveWordWrap(vector<int> &w,int n,int M) {
    int spaces[n+1][n+1],lc[n+1][n+1];
    vector<int> c[n+1],ans[n+1];
    for(int i=1;i<=n;i++){
        spaces[i][i]=M-w[i-1];
        for(int j=i+1;j<=n;j++){
            spaces[i][j]=spaces[i][j-1]-w[j-1]-1;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            if(spaces[i][j]<0){
                spaces[i][j]=INF;
            } else if(j==n && spaces[i][j]>=0){
                spaces[i][j]=0;
            } else {
                spaces[i][j]*=spaces[i][j];
            }
        }
    }
    c[0]=0;
    for(int j=1;j<=n;j++){
        c[j]=INF;
        for(int i=1;i<=j;i++){
            if(c[i-1]!=INF && lc[i][j]!=INF && (c[i-1] + lc[i][j]<c[j]){
                c[j]=c[i-1]+lc[i][j];
                ans[j]=i;
            }
        }
    }
    return ans;
}

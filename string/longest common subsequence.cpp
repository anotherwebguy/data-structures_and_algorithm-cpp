
int lcs(string x, string y) {
    int m=x.size(),n=y.size();
    int L[m+1][n+1];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 && j==0){
                L[i][j]=0;
            } else if(x[i-1]==y[j-1]){
                L[i][j]=1+L[i-1][j-1];
            } else {
                L[i][j]=max(L[i][j-1],L[i-1][j]);
            }
        }
    }
    return L[m][n];
}

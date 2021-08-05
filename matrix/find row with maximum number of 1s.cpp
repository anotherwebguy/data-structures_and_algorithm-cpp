
int maxrowwithones(vector<vector<int>> mat) {
    int n=mat.size();
    int m=mat[0].size();
    int j=m-1;
    int index=0,max=0;
    for(int i=0;i<n;i++){
        bool flag=false;
        while(j>=0 && mat[i][j]==1){
            j--;
            flag=true;
        }
        if(flag){
            max=i;
        }
    }
    if(max==0 && mat[0][m-1]==0) return -1;
    return max;
}


vector<vector<int>> rotatematrix(vector<vector<int>> &mat) {
    int n=mat.size();
    for(int x=0;i<n;x++){
        for(int y=x;y<n-x-1;y++){
            int temp=mat[x][y];
            mat[x][y]=mat[y][n-x-1];
            mat[y][n-x-1]=mat[n-1-x][n-1-y];
            mat[n-1-x][n-1-y]=mat[n-1-y][x];
            mat[n-1-y][x]=temp;
            
        }
    }
    return mat;
}

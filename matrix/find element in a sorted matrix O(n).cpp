
vector<int> findkey(vector<vector<int>> &mat,int n, int key) {
    if(n==0) return [-1];
    if(key<mat[0][0] || key>mat[n-1][n-1]) return [-1];
    int i=0,j=n-1;
    while(i<n && j>=0){
        if(mat[i][j]==key){
            vector<int> ans;
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        } else if(mat[i][j]<key){
            i++;
        } else {
            j--;
        }
    }
    return [-1];
    
    
}

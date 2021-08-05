
vector<int> findkey(vector<vector<int>> &mat,int fromrow,int torow,int fromcol, int tocol, int key) {
    int i=fromrow+(torow-fromrow)/2;
    int j=fromcol+(tocol-fromcol)/2;
    if(mat[i][j]==key){
        vector<int> ans;
        ans.push_back(i);
        ans.push_back(j);
        return ans;
    } else {
        if(i!=torow || j!=fromcol){
            findkey(mat,fromrow,i,j,tocol,key);
        }
        if(fromrow==torow && fromcol+1==tocol){
            if(mat[fromrow][tocol]==key){
                vector<int> ans;
                ans.push_back(fromrow );
                ans.push_back(tocol);
                return ans;
            }
        }
        if(mat[i][j]<key){
            if(i+1!=torow){
                findkey(mat,i+1,torow,fromcol,tocol,key);
            }
        } else {
            if(j-1!=fromcol){
                findkey(mat,fromrow,torow,fromcol,j-1,key);
            }
        }
    }
    return [-1];
}

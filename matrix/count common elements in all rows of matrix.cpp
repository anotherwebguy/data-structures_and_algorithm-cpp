
vector<int> countcommon(vector<vector<int>> &mat) {
    map<int,int> mp;
    vector<int> ans;
    int n=mat.size(),m=mat[0].size();
    for(int i=0;i<m;i++){
        mp[mat[0][i]]=1;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(mp[mat[i][j]]==i){
                mp[mat[i][j]]=i+1;
                if(i==n-1 && mp[mat[i][j]]==n){
                    ans.push_back(mat[i][j]);
                }
            }
        }
    }
    return ans;
}

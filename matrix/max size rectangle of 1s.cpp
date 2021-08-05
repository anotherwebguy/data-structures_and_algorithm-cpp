void maxrectangle(vector<vector<int>> mat) {
     int n=mat.size(),m=mat[0].size();
     vector<vector<int>> a(n,vector<int> (m,0));
     for(int i=0;i<n;i++){
         a[i][0]=mat[i][0];
     }
     for(int i=0;i<m;i++){
         a[0][i]=mat[0][i];
     }
     for(int i=1;i<n;i++){
         for(int j=1;j<m;j++){
             if(mat[i][j]==1){
                 a[i][j]=min(a[i][j-1],min(a[i-1][j],a[i-1][j-1]))+1;
             } else {
                 a[i][j]=0;
             }
         }
     }
     int max_i=0,max_j=0,max=INT_MIN;
     for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
             if(max<a[i][j]){
                 max=a[i][j];
                 max_i=i;
                 max_j=j;
             }
         }
     }
     for(int i=max_i;i>max_i-max;i--){
         for(int j=max_j;j>max_j-max;j--){
             cout<<mat[i][j]<<" ";
         }
         cout<<"\n";
     }
}

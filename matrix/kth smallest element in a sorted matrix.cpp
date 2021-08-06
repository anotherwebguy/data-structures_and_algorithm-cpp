int countelements(vector<int> &a, int key){ 
     int l=0,h=m.size(); 
     while(l<=h){ 
         int mid=(l+h)>>1; 
         if(a[mid]<=key) l=mid+1; 
         else h=mid-1;
     } 
     return l;
}

int kthSmallestElement(vector<vector<int>> &mat,int k){ 
     int n=mat.size(),m=mat[0].size();
     int low=mat[0][0],high=mat[n-1][m-1];
     while(low<=high){
         int mid=(low+high)>>1;
         int count=0;
         for(int i=0;i<n;i++){
             cnt+=countelements(mat[i],mid);
         }
         if(cnt>=k) high=mid-1;
         else low=mid+1;
     }
     return low;
}

int countelements(vector<int> &a, int key){
    int l=0,h=m.size();
    while(l<=h){
        int mid=(l+h)>>1;
        if(a[mid]<=key) l=mid+1;
        else h=mid-1
    }
    return l;
}
int findMedian(vector<vector<int>> &m) {
    int low=INT_MAX,high=INT_MIN;
    int n=m[0].size();
    for(int i=0;i<m.size();i++){
        if(m[i][0]<low) low=m[i][0];
        if(m[i][n-1]>high) high=m[i][n-1];
    }
    while(low<=high){
        int mid=(low+high)>>1;
        int cnt=0;
        for(int i=0;i<m.size();i++){
            cnt+=countelements(m[i],mid);
        }
        if(cnt<=(m.size()*n)/2) low=mid+1;
        else high=mid-1;
    }
    return low;
}

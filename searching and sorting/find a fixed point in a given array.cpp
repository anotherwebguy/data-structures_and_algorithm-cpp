int fixedPosition(vector<int> &a,int x){
    int l=0,h=a.size()-1;
    while(l<=h){
        int m=(l+h)>>1;
        if(a[m]==m) return m;
        else if(a[m]<m) l=m+1;
        else h=m-1;
    }
    return -1;
}


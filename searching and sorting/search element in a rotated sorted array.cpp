int searchElement(vector<int> &a,int x){
    int l=0,h=a.size()-1;
    while(l<=h){
        int m=(l+h)>>1;
        if(a[m]==x) return m;
        if(a[m]<=a[l]){
            if(a[l]<=x && x<=a[m]) h=m-1;
            else l=m+1;
        } else {
            if(x>=a[m] && a[h]>=x) l=m+1;
            else h=m-1;
        }
    }
    return -1;
}


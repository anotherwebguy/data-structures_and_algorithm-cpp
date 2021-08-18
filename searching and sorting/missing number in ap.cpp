
int missing(vector<int> &a) {
    int n=a.size();
    int diff=(a[n-1]-a[0])/n;
    int l=0,h=n-1;
    while(l<=h){
        int m=(l+h)>>1;
        if(a[m+1]-a[m]!=diff) return a[m]+diff;
        if(a[m]-a[m-1]!=diff) return a[m-1]+diff;
        if(a[m]==a[0]+diff*m) l=m+1;
        else j=m-1;
    }
    return -1;
}

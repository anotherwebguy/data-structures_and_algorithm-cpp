
int pivotSearch(vector<int> &a, int x) {
    int l=0,h=a.size()-1;
    while(l<=h){
        int m=(l+h)>>1;
        if(a[m]==x) return m;
        else if(a[l]<=a[m]){
            if(x>=a[l] && x<=a[m]){
                h=m-1;
            } else {
                l=m+1;
            }
        } else {
            if(x>=a[m] && x<=a[h]){
                l=m+1;
            } else {
                h=m-1;
            }
        }
    }
    return -1;
}

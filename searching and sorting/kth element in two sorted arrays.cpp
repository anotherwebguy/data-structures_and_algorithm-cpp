
int kthElement(vector<int> a,vector<int> b) {
    if(a.size()>b.size()) return kthElement(b,a);
    int n=a.size(),m=b.size();
    int low=max(0,k-m),high=min(n,k);
    while(low<=high){
        int cut1=(low+high)>>1;
        int cut2=k-cut1;
        int l1=cut1==0? INTMIN : a[cut1-1];
        int l2=cut2==0? INTMIN : b[cut2-1];
        int r1=cut1==n ? INTMAX : a[cut1];
        int r2=cut2==m? INTMAX : b[cut2];
        if(l1<=r2 && l2<=r1){
            return max(l1,l2);
        } else if(l1>r2){
            high=cut1-1;
        } else {
            low=cut1+1;
        }
    }
    return 1;
}

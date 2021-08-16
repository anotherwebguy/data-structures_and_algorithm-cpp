
vector<int> prodArray(vector<int> &a) {
    int n=a.size();
    vector<int> prod(1,n);
    int t=1;
    for(int i=0;i<n;i++){
        prod[i]=t;
        t*=a[i];
    }
    t=1;
    for(int i=n-1;i>=0;i--){
        prod[i]*=t;
        t*=a[i];
    }
    return prod;
}

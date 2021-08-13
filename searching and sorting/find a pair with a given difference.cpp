
vector<int> findPair(vector<int> &a,int x) {
    int n=a.size(),i=0,j=1;
    sort(a.begin(),a end());
    while(i<n && j<n){
        if((a[j]-a[i])==x) return {a[i],a[j]};
        else if((a[j]-a[i])<x) j++;
        else i++;
    }
    return -1;
}

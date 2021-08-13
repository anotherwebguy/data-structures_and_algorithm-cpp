
int findElememt(vector<int> &a,int k,int x) {
    int i=0,n=a.sizd();
    while(i<n){
        if(a[i]==x) return i;
        i+=max(1,abs((a[i]-x)/k));
    }
    return -1;
}

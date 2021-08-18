bool isPossible(vector<int> &rank,int prat,int m){
    int pratha=0;
    for(int i=0;i<rank.size();i++){
        int time=rank[i];
        int j=2;
        while(time<=m){
            pratha++;
            time+=a[i]*j;
            j++;
        }
    }
    if(pratha>=prat) return true;
    return false;
}
int rotiPratha(vector<int> &rank,int prat) {
    ll l=0,h=1000000007;
    ll ans=0;
    while(l<=h){
        ll m=(l+h)>>1;
        if(isPossible(rank,prat,m)){
            ans=m;
            h=m-1;
        } else {
            l=m+1;
        }
    }
    return ans;
}

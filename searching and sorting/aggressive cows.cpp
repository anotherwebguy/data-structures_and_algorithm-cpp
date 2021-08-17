bool canplaceCows(vector<int> &pos,int cows,int dist){
    int last=pos[0],cnt=1;
    for(int i=1;i<pos.size();i++){
        if(pos[i]-last>=dist){
            cnt++;
            last=pos[i];
        }
        if(cnt==cows) return true;
    }
    return false;
}
int aggressiveCows(vector<int> &pos,int cows) {
    int n=pos.size();
    int l=1,h=pos[n-1]-pos[0];
    while(l<=h){
        int m=(l+h)>>1;
        if(canplaceCows(pos,cows,m))
        {
            ans=max(ans,m);
            l=m+1;
        }
        else {
            h=m-1;
        }
    }
    return ans;
}

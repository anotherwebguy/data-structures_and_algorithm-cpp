int isPossible(vector<int> &trees,int s,int m){
    int sum=0;
    for(int i=0;i<trees.size();i++){
        if(trees[i]>m) sum+=trees[i]-m;
    }
   // if(sum<s) return false;
    return sum;
}

int Eko(vector<int> &trees,int n) {
    int l=0,h=INT_MIN;
    for(int i=0;i<trees.size();i++){
        h=max(h,trees[i]);
    }
    int res=0;
    while(l<=h){
        int m=(l+h)>>1;
        int s=isPossible(trees,n,m);
        if(s==n) return m;
        else if( s<k){
            h=m-1;
        } else {
            l=m+1;
            if (m>h) h=m;
        }
    }
    return 0;
}

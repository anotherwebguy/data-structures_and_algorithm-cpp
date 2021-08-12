int squareRoot(int n){
    int l=0,h=n;
    while(l<=h){
        int m=(l+h)>>1;
        if(m*m==x) ans=m;
        else if(m*m<=x){
            l=m+1;
            ans=m
        }
        else h=m-1;    
    }
    return ans;
}


bool check(int m,n){
    int f=5,cnt=0,temp=m;
    while(f<=temp){
        cnt+=temp/f;
        f*=5;
    }
    return (count>=n);
}
int missing(int n) {
    int l=0,h=5*n;
    while(l<h){
        int m=(l+h)>>1;
        if(check(m,n)) h=m;
        else l=m+1;
    }
    return l;
}

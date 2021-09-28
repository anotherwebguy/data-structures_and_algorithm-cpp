        
int quotient(int x,int y) {
    int sign = (x>0) ^ (y>0) ? -1 : 1;
    int q=0,t=0;
    for(int i=31;i>=0;i--){
        if(t+(y<<i)<=x){
            t+=y<<i;
            q|=1LL<<i;
        }
    }
    return q;
}


int split(string s) {
    int c0=0,c1=0,c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0') c0++;
        else c1++;
        if(c0==c1) c++;
    }
    if(c==0) return -1;
    return c;
}

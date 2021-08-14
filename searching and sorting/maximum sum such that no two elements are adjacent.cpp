
int maxsum(vector<int> &a) {
    int inc=a[0];
    int exc=0;
    int excp=0;
    for(int i=0;i<a.size();i++){
        excp=max(inc,exc);
        inc=exc+a[i];
        exc=excp;
    }
    return max(inc,exc);
}

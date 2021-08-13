int mooreVoting(vector<int> &a){
    int mi=0,count=1;
    for(int i=0;i<a.size();i++){
        if(a[mi]==a[i]) count++;
        else count--;
        if(count==0){
            mi=i;
            count=1;
        }
    }
    return a[mi];
}
int isMajor(vector<int> &a) { 
    int x=mooreVoting(a);
    int n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]==x){
            count++;
        }
    }
    if(count>=n/2) return x;
    return -1;
}

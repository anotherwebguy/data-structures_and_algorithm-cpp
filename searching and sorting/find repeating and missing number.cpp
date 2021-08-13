
vector<int> repeatMissing(vector<int> &a) { 
    int n=a.size();
    int rep=0,mis=0;
    for(int i=0;i<n;i++){
        if(a[abs(a[i])-1]>0){
            a[abs(a[i])-1]=-a[abs(a[i])-1];
        } else {
            rep=a[abs(a[i])-1];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]>0){
            mis=i+1;
            break
        }
    }
    return {rep,mis};
}

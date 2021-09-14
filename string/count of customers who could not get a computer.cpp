
int customerscount(int n,string s) {
    char seen[26]={0};
    int res=0;
    int occ=0;
    for(int i=0;i<s.size();i++){
        int id=s[i]-'A';
        if(seen[id]==0){
            seen[id]=1;
            if(occ<n){
                occ++;
                seen[id]=2;
            } else {
                res++;
            }
        } else {
            if(seen[id]==2){
                occ--;
            }
            seen[id]=0;
        }
    }
    return res;
}

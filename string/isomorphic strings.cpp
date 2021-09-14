
bool isomorphicstrings(string s,string r) {
    int m=s.size(),n=r.size();
    if(m!=n) return false;
    bool mark[256]={false};
    int map[256]={-1};
    for(int i=0;i<m;i++){
        if(map[s[i]==-1){
            if(mark[r[i]){
                return false;
            }
            mark[r[i]]=true;
            map[s[i]]=r[i];
        } else if(map[s[i]]!=r[i]){
            return false;
            
        }
    }
    return true;
}

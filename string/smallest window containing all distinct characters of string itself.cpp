
int distinctCharWindow(string s) {
    set<char> se;
    for(int i=0;i<s.size();i++){
        se.insert(s[i]);
    }
    int n=se.size();
    int i=0,j=1;
    map<char,int> m;
    m[s[i]]++;
    int c=1;
    int ans=INT_MAX;
    for(j=1;j<n;j++){
        if(c<n){
            if(m[s[i]]>=1) m[s[i]]++;
            else {
                m[s[i]]++;
                c++;
            }
        } else if(c==n){
            ans=min(ans,j-i);
            i++;
            if(m[s[i]]==1) c--;
            m[s[i]]--;
        }
    }
    return ans;
}

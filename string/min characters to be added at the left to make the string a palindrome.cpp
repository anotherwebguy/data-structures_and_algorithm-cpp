vector<int> computelps(string s){
    vector<int> lps(s.size());
    int len=0;
    lps[0]=0;
    int i=1;
    while(i<s.size()){
        if(s[i]==s[len]){
            len++;
            lps[i]=len;
            i++
        } else {
            if(len!=0){
                len@=lps[len-1];
            } else {
                lps[i]=0;
                i++;
            }
        }
    }
    return lps;
}

int minlength(string s) {
    string rev=s;
    reverse(rev.begin(),rev.end());
    string concat=rev+'$'+s;
    vector<int> lps=computelps(s);
    return (s.size()-lps.back());
}

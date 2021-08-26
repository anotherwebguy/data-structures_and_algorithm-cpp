void computelps(int m,int *lps,string pat){
    int len=0;
    int i=1;
    while(i<m){
        if(pat[i]==pat[len]){
            len++;
            lps[i]=len;
            i++;
        } else {
            if(len!=0){
                len=lps[len-1];
            } else {
                lps[i]=0;
                i++;
            }
        }
    }    
}

int kmp(string text, string pat) {
    int n=test.length();
    int m=pat.length();
    int lps[m];
    computelps(m,lps,pat);
    int i=0,j=0;
    vector<int> start;
    while(i<n && j<m){
        if(text[i]==pat[j]) {
            i++;
            j++;
        }
        if(j==m) {
            start.push_back(i-j);     
            j=lps[j-1];
        } else if(i<n && text[i]!=pat[j]) {
             if(j!=0){
                 j=lps[j-1];
             } else {
                 i++;
             }
        }
    }
    return start;
}

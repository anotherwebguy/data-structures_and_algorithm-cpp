
void allsubsequences(string ans,int i,int n,string s) {
    if(i==n) cout<<ans<<"\n";
    else {
        allsubsequences(ans,i+1,n,s);
        ans+=s[i];
        allsubsequences(ans,i+1,n,s);
    }
}

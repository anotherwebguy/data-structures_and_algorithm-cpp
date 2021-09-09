bool isvalid(string s,i,j,k,n){
    string p=s.substr(0,i+1),q=s.substr(i+1,j+1),r=s.substr(j+1,k+1),t=s.substr(k+1,n);
    bool valid=true;
    if((p.length()<=0 || p.length()>3) || (q.length()<=0 || q.length()>3) || (r.length()<=0 || r.length()>3) || (t.length()<=0 || t.length()>3)){
        valid=false;
    }
    if((p[0]=='0' && p.length()>1) || (q[0]=='0' && q.length()>1) || (r[0]=='0' && r.length()>1) || (t[0]=='0' && t.length()>1)){
        valid=false;
    }
    if((stoi(p)<0 || p.length()>255) || (stoi(q)<0 || stoi(q)>255) || (stoi(r)<0 || stoi(r)>3) || (stoi(t)<0 || stoi(t)>255)){
        valid=false;
    }
    return valid;
}


vector<string> validIP(string s) {
    vector<string> ans;
    string p;
    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            for(int k=j+1;k<n-1;k++){
                if(isvalid(s,i,j,k,n){
                    p="";
                    for(int l=0;l<n;l++){
                        if(l==i || l==j || l==k){
                            p+=s[i];
                            p+='.';
                        } else {
                            p+=s[i];
                        }
                    }
                    ans.push_back(p);
                }
            }
        }
    }
    return ans;
}


vector<vector<string>> anagarams(vector<string> s) {
    map<string,vector<string>> m;
    for(int i=0;i<s.size();i++){
        int a=s[i];
        sort(a begin(),a end());
        m[a].push_back(s[i]);
    }
    vector<vector<string>> ans;
    int idx=0;
    for(auto i:m){
        auto v=i.second;
        for(int j=0;j<v.size();j++){
            ans[idx].push_back(v[i]);
        }
        idx++;
    }
    return ans;
}

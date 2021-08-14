// O(n²) implementation 

vector<int> findfour(vector<int> &a,int x) {
    vector<int> ans;
    unordered_map<int,pair<int,int>> m;
    for(int i=0;i<a.size()-1;i++){
        for(int j=i+1;j<a.size();j++){
            map[a[i]+a[j]]=make_pair(i,j);
        }
    }
    for(int i=0;i<a.size()-1;i++){
        for(int j=i+1;j<a.size();j++){
            int sum=a[i]+a[j];
            if(m.find(x-sum)!=m.end()){
                pair<int,int> p=m[x-sum];
                if(p.first!=i && p.first!=j && p.second!=i && p.second!=j){
                    ans.push_back(p.first);
                    ans.push_back(p.second);
                    ans.pudh_back(i);
                    ans.push_back(j);
                }
            }
        }
    }
    return ans;
}

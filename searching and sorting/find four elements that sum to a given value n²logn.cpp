bool compare(pair<int,pair<int,int> &a, pair<int,pair<int,int> &b){
    return a.first-b.first;
}

bool norepeat(pair<int,pair<int,int> &a, pair<int,pair<int,int> &b){
    if(a.second.first==b.second.first || a.second.first==b.second.second || a.second.second == b.second.first || a.second.second == b.second.second){
        return false;
    }
    return true;
}

vector<int> findFour(vector<int> &a,int x) {
    vector<pair<int,pair<int,int>> temp;
    vector<int> ans;
    int n=a.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            temp.make_pair(a[i]+a[j],make_pair(i,j));
        }
    }
    sort(temp.begin(),temp.end(),compare);
    int l=0,r=temp.size()-1;
    while(l<temp.size() && j>=0){
        if(norepeat(temp[l],temp[r]) && temp[l].first+temp[r].first==x){
            ans.push_back(a[temp[l].second.first);
            ans.push_back(a[temp[l].second.second);
            ans.push_back(a[temp[r].second.first);
            ans.push_back(a[temp[r].second.second);
        
        } else if(temp[l].first+temp[r].first<x){
            l++;
        } else {
            r--;
        }
    }
    return ans;
}

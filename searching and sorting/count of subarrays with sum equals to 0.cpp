
int countSub(vector<int> &a) {
    map<int,int> cnt;
    int prefsum=0;
    for(int i=0;i<a.size();i++){
        prefsum+=a[i];
        cnt[prefsum]++;
    }
    int ans=0;
    for(auto i:cnt){
        int c=i.second;
        ans+=c*(c-1)/2;
        if(i.first==0){
            ans+=c;
        }
    }
    return ans;
}


int minswaps(vector<int> &a) {
    vector<pair<int,int>> temp;
    int n=a.size();
    for(int i=0;i<n;i++){
        temp.push_back(make_pair(a[i],i));
    }
    sort(temp.begin(),temp.end());
    int c=0;
    for(int i=0;i<n;i++){
        if(temp[i].second==i) continue;
        else {
            c++;
            swap(temp[i],temp[temp[i].second]);
            i--;
        }
    }
    return c;
}

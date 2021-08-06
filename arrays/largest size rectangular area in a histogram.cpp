
int maxAreaRectangle(vector<int> &a) {
    stack<int> s;
    int n=a.size();
    vector<int> leftmin(n),rightmin(n);
    for(int i=0;i<a.size();i++){
        while(!s.empty() && a[s.top()]>=a[i]){
            s.pop();
        }
        if(s.empty()) leftmin[i]=0;
        else leftmin[i]=s.top()+1;
        s.push(i);
    }
    s clear();
    for(int i=n-1;i>=0;i--){
        while(!s.empty() && a[s.top()]>=a[i]){
            s.pop();
        }
        if(s.empty()) rightmin[i]=n-1;
        else rightmin[i]=s.top()-1;
        s.push(i);
    }
    int maxans=INT_MIN;
    for(int i=0;i<n;i++){
        maxans=max(maxans,a[i]*(rightmin[i]-leftmin[i]+1));
    }
    return maxans;
}

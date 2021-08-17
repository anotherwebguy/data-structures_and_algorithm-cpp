bool isPossible(vector<int> &pages,int s,int m){
    int curr_sum=0,cnt=0;
    for(int i=0;i<pages.size();i++){
        if(pos[i]>m) return false;
        if(curr_sum + pages[i]>m){
            cnt++;
            curr_sum=pages[i];
            if(cnt> s) return false;
        } else {
            curr_sum+=pages[i];
        }
    }
    return true;
}

int bookAllocation(vector<int> &pages,int s) {
    int sum=0;
    for(int i=0;i<pages.size();i++){
        sum+=pages[i];
    }
    int l=0,h=sum;
    while(l<=h){
        int m=(l+h)>>1;
        if(isPossible(pages,s,m){
            res=m;
            h=m-1;
        } else {
            l=m+1;
        }
    }
    return res;
}

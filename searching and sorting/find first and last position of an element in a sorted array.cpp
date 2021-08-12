int first(vector<int> &a,int x){
    int l=0,h=a.size()-1;
    while(l<=h){
        int m=(l+h)>>1;
        if((m==0 || a[m-1]<x) && a[m]==x) return m;
        else if(a[m]<x) l=m+1;
        else h=m-1;
    }
    return -1;
}

int last(vector<int> &a,int x){
    int l=0,h=a.size()-1;
    while(l<=h){
        int m=(l+h)>>1;
        if((m==n-1 || a[m+1]>x) && a[m]==x) return m;
        else if(a[m]<x) l=m+1;
        else h=m-1;
    }
    return -1;
}

vector<int> findOccurence(vector<int> &a,int x){ 
    vector<int> ans;
    int b=first(a,x);
    int c=last(a,x);
    ans.push_back(b);
    ans.push_back(c);
    return ans;
}

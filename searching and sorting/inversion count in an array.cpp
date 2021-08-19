int merge(vector<int> &a,vector<int> &t,int left,int mid,int right){
    int i=left;
    int j=mid;
    int k=left;
    int count=0;
    while(i<=mid-1 && j<=right){
        if(a[i]<=a[j]){
            t[k++]=a[i++];
        } else {
            t[k++]=a[j++];
            count+=mid-1;
        }
    }
    return count;
}


int mergesort(vector<int> &a,vector<int> &t,int left,int right){
    int count=0;
    if(right>left){
        int mid=(left+right)>>1;
        count+=mergesort(a,t,left,mid);
        count+=mergesort(a,t,mid+1,right);
        
        count+=merge(a,t,left,mid+1,right);
    }
    return count;
}

int main() {
    vector<int> a={8,4,2,1};
    int n=a.size();
    vector<int> t(n);
    int ans=mergesort(a,t,0,n-1);
    cout<<ans;
    return 0;
}

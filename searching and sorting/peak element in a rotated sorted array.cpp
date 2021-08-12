int peakElement(vector<int> &a,int x){
    int l=0,h=a.size()-1;
    while(l<=h){
        int m=(l+h)>>1;
        if((m==0 && a[m]>a[m+1]) || (m==n-1 && a[m]>a[m-1])) return a[m];
        else if(m<h && m>l && a[m]>a[m+1] && a[m]>a[m-1]) return a[m];
        else if(a[m]<a[l]) h=m-1;
        elss l=m+1;    
    }
    return -1;
}


//(n+m)log(n+m) approach

int merge(vector<int> &a,vector<int> &b) {
    int n=a.size(),m=b.size();
    int i,j;
    for(int g=(n+m)/2;g>=1;g=ceil(g/2)){
        for( i=0;i+g<n;i++){
            if(a[i]>a[i+g]){
                swap(a[i],a[i+g]);
            }
        }
        for(j=gap>n?gap-n :0;i<n && j<m;i++,j++){
            if(a[i]>b[j]){
                swap(a[i],b[j]);
            }
        }
        if(j<m){
            for(j=0;j+g<m;j++){
                if(b[j]>b[j+g]){
                    swap(b[j],b[j+g]);
                }
            }
        }
    }
}

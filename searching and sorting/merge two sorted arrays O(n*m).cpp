// O(n*m) approach
void merge(vector<int> &a,vector<int> &b) {
    int n=a.size();
    int m=b.size();
    int i=0,j=0;
    while(i<n && j<m){
        if(a[i]<=b[j]){
            i++;
        } else {
            swap(a[i],b[j]);
            i++;
            if(j<m-1 && b[j]>b[j+1]){
                int temp=b[j];
                int k=j+1;
                while(k<m && b[k]<temp){
                    b[k-1]=b[k];
                    k++;
                }
                b[k-1]=temp;
            }
        }
    }
}

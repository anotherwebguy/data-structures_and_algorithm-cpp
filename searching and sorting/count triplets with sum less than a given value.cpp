
int countTriplets(vector<int> &a, int x) {
    int count=0;
    for(int i=0;i<a.size()-2;i++){
        int l=i+1,r=a.size()-1;
        while(l<r){
            if(a[i]+a[l]+a[r]>=x){
                r--;
            } else {
                count+=(r-l);
                l++;
            }
        }
    }
    return count;
}

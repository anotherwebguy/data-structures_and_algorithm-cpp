
vector<int> findMinMax(vector<int> &a){
    int n=a.size();
    int i=0,min=0,max=0;
    if(n%2==0){
        if(a[0]>a[1]){
            max=a[0];
            min=a[1];
        } else {
            max=a[1];
            min=a[0];
        }
        i=2;
    } else {
        max=a[0];
        min=a[0];
        i=1;
    }
    while(i<n-1){
        if(a[i]>a[i+1]){
            if(a[i]>max){
                max=a[i];
            }
            if(a[i+1]<min){
                min=a[i+1];
            }
        } else {
            if(a[i+1]>max){
                max=a[i+1];
            }
            if(a[i]<min){
                min=a[i];
            }
        }
    }
    return {min,max};
}

int countbits(int a){
    int count=0;
    while(a){
        if(a&1){
            count++;
        }
        a>>1;
    }
    return count;
}

bool compare(int &a,int &b){
    int x=countbits(a);
    int y=countbits(b);
    return x>y;
}
void sortbyCount(vector<int> &a) {
    int n=a.size();
    sort(a.begin(),a.end(),compare);
    return 0;
}

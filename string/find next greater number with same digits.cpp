
string findNext(string res) {
    int i=a.size()-2;
    while(i>=0 && res[i]>=res[i+1]) i--;
    if(i>=0){ 
       int j=n-1; 
       while(res[j]<=res[i]) j--;
       swap(res[i],res[j]); 
    } 
    i++; 
    int j=n-1;
    while(i<j){ 
       swap(res[i++],res[j--]); 
    } 
    return res;
}

        
int soln(int n) {
    int x=floor(log2(n));
    int bitstill2x = x*(1<<(x-1));
    int msb2xton = n-(1<<x) +1;
    int res = n - (1<<x);
    int ans = bitstill2x + msb2xton + soln(res);
    return ans;
}

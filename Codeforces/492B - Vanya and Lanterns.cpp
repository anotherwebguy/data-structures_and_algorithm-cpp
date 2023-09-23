#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ; int l ; 
    cin >> n ; cin >> l ; vector<int> arr(n) ;
    for(int i = 0 ; i < n ; ++i){
        cin >> arr[i] ; 
    } 
    sort(arr.begin() , arr.end());
    int max1 = arr[0] ;
    int max2 = l - arr[n-1] ; 
    int max3 = -1;
    for(int j = 0 ; j < n ; ++j){
        if(arr[j] - arr[j-1] > max3){
            max3 = arr[j] - arr[j-1] ; 
        }
    }
    double s1; double s2;
    s1 = max(max1 , max2) ;
    s2 = max(s1 , (double)max3/2);     
    printf("%.11lf \n" , s2);
}

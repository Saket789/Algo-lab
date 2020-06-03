#include <bits/stdc++.h>
using namespace std ;
int c = 0 ;
int dpp(int *dp, int n){
    cout << " call " << ++c <<" " << n << " ";
    if(n == 0) return 0 ;
    if(n == 1) return 1 ;
    if(dp[n] != -1) return dp[n] ;    
    return dp[n] = dpp( dp, n-1) + dpp( dp, n-2) ;
}

int main(){
    int n ;
    cin >> n ;
    int dp[n] ;
    for(int i=0;i<n;i++) dp[i] = -1 ;
    dpp( dp, n-1) ;
    cout << dp[n-1] ; 
}
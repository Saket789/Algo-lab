
/* This is knap-sack problem solved using greedy technique. */


#include <bits/stdc++.h>
using namespace std ;
vector<pair < float, int> > v ; 

int main(){
    int n , m ;
    cin >> n >> m ;
    float a[n]={0} ;
    float b[n]={0} ;
    float c[n]={0} ;

    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i] ;
    }

    for(int i=0; i<n; i++){
        c[i] = a[i]/b[i] ;
        v.push_back(make_pair(c[i], i)) ;
    }

    sort(v.begin(), v.end()); 

    int k = n-1 , pos=0, value=0;
    float ans = 0 , weight=0;

    while(m > 0){
        weight = v[k].first ;
        pos = v[k].second ;
        value = b[pos] ;
        if(value > m ){
            value = abs(weight - value) ;
            ans = ans + (float)value*(float)v[k].first ;
            m = 0 ;
        }
        else{
            ans = ans + a[pos] ;
            m = m - b[pos] ;
        }
    k-- ;
    }
    cout << ans  ;
}

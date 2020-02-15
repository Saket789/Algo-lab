#include<bits/stdc++.h>
using namespace std ;
#define loop(a,n,var) for(int var=a; var<n; var++)

int main(){
    int n, m ; 
    cin >> n >> m ;     // vertex and edges
    vector <vector<int> > v( m , vector<int> (3, 0)) ;
    // cout << v[3][2] ;
    int mat[n+1][n+1] ;
    loop(0, m, i){  // input vector 
        int a ,b , c ;
        cin >> a >> b >> c ;
        v[i][0] = a ;
        v[i][1] = b ;
        v[i][2] = c ;
        // v.push_back()
    }
    int vis[n+1] ;
    loop( 0, n+1, i) vis[i] = 1000 ;    // assigning initial values to infinity
    vis[0]=0; vis[1]=0;





    // int a, b , c ; 
    // loop( 0, n-1, j){    // for vertex-1 times relxation will work
    //     loop( 0, m, i){      // in every loop distance between two points will be minimized if possible
    //         a = v[i][0] ; b = v[i][1]; c = v[i][2] ;
    //         if(vis[a] + c < vis[b]){
    //             vis[b] = c + vis[a] ;    // each time updating minimun cost for start to every point
    //         }
    //     }
    // }
    // loop( 1, n+1, i) cout << vis[i] << " " ;
}



















// 7 10
// 1 2 6
// 1 3 5
// 1 4 5
// 2 5 -1
// 3 2 -2
// 3 5 1
// 4 3 -2
// 4 6 -1
// 5 7 3
// 6 7 3

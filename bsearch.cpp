/**
**********************************************************************************************************************************************************************************************************************************
* @file:	bsearch.cpp
* @author:	Saket Vajpai
* @date:	2020年05月20日 23:13:07 Wednesday
* @brief:	Binary Search 
**********************************************************************************************************************************************************************************************************************************
**/

#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cout << "Enter total number" ;
    cin >> t ;
    int arr[t] ;
    for(int i=0; i<t; i++)
        cin >> arr[i] ;
    sort(arr,arr+t) ;

    cout << "Enter no to search" ;
    int a ;
    cin >> a ;
    int l=0,r=t-1,mid=0 ;
    bool flag = true ;

    while(l != r){
        // cout << mid << " " ;
        mid = l + (r-l)/2 ;
        if(arr[mid] == a){
            cout <<  "Yes found at index = " <<  mid ;
            flag = false; 
            break ;
        }
        else if(arr[mid] > a){
            r = mid - 1 ;
        }    
        else if(arr[mid] < a){
            l = mid + 1 ;
        }

        // if(flag)
            // cout << "Not found" ;
        
    } 
}
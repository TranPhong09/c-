#include<iostream>  
using namespace std ; 
 int a[10000001] ;
 bool sieve(){ 
    for ( int i = 2 ; i <= 1000000; i++ ) a[i] = 1 ; 
     for ( int i = 2 ; i <= 1000 ; i++  ){  
        if (a[i]) { 
		
        for ( int j = i*i ; j <= 100000; j += i ){ 
              a[j] = 0 ;      
		} 
        }            
	 }
 } 
 int main(){ 
    sieve(); 
 	int n  ; 
 	cin >> n;  
 	int k = 0 , i = 0 ;
 	while  (k < n)  { 
	  if (a[i]) { 
	    cout << i << " " ; 
		 k++ ;  
		}
	i++ ; 
	} 
 	
 }
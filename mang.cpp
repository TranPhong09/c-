#include<iostream> 
using namespace std ; 
 int main(){ 
   int prime[1000]; 
    int n ; 
     cin >> n ; 
    for ( int i = 1 ; i <= n ; i++){  
         cout << " a [" << i  << "] =" ; 
          cin >> prime[i]; 
          
	}  
   for ( int i = 1 ; i <= n ; i++){ 
      cout << prime[i] << " ";
   }	
 }
#include<iostream> 
using namespace std ; 
 
 bool snt(int n ){  
     for ( int i = 1 ; i <= n ; ++i){ 
        if (n % i == 0 ) {
		 int  s = s + 1 ; }  
	 } 
	//	 if  ( s = 2)  true   else  false ;
int main(){ 
int n  ; 
cin >> n ; 
int a[100] ;
for ( int i = 1 ; i <= n ; ++i){ 
 cin >> a[i] ; 
} 
for ( int i = 1 ; i <= n ; ++i) 
{ 
 if(snt(a[i])){ 
    cout << i << " "; 
 }
} 
return 0 ; 


}
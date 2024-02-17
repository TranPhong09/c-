#include <bits/stdc++.h>
using namespace std ; 
 
  main(){ 
 int a , b ; 
 cin >> a >> b ; 
 
 
 int tong = a+b; 
 int hieu = a -b ; 
 int  tich = a * b ;
 float thuong = (float)a / b; 
 cout << tong << endl ;  
 cout << hieu << endl ;
 cout << tich << endl ; 
 
 if ( b == 0 ) { cout << "ERROR" ; 
 } else { cout << fixed << setprecision(1) << thuong << endl ; 
 }

}
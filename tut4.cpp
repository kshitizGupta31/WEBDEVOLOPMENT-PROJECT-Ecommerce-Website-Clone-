#include<iostream>
 using namespace std;
     
int c=65;     
 int main() {
     int a,b,c

     ;  cout<<"Enter the value a"<<endl;
    cin>>a;
       cout<<"Enter the value b"<<endl;
       cin>>b;
       c=a+b ; 
      ;  cout<<"the sum c is "<<c<<endl;
       
       cout<<"The global of c  "<< ::c;    
  
   ; return 0;
      }
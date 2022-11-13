#include <iostream>
using namespace std;
int main(){

 int a;
 int b;
 int c;
cout<<"enter number"<<endl;
 cin>>a;
 
 cout<<"enter number"<<endl;
 cin>>b;
 
 cout<<"enter number"<<endl;
 cin>>c;
 
 
 
 if( a<b && a<c && b>c ){
cout<< "small" <<a<<endl;
 cout<<"middle "<<c<<endl;
 cout<< "large" <<b<<endl;}
 
 
 
 else if( a<b && a<c && b<c ) {
 
 
 
 cout<< "small" <<a<<endl;
 cout<<" middle "<<b<<endl;
 cout<< "large" <<c<<endl;
 }
 
 
 
 else if ( b<a && b<c && c>a ){
 
 
 cout<< "small" <<b<<endl;
 cout<<"middle "<<a<<endl;
 cout<< "large" <<c<<endl;
 }
 
 else if ( b<a && b<c && c<a ){
 
 
 cout<< "small" <<b<<endl;
 cout<<"middle "<<c<<endl;
 cout<< "large" <<a<<endl;
 }
 
 
 else if ( c<a && c<b && a>b){
 
 
 
 cout<< "small" <<c<<endl;
 cout<<"middle "<<b<<endl;
 cout<< "large" <<a<<endl;
 
 }
 
 else if ( c<a && c<b && a<b){
 
 
 
 cout<< "small" <<c<<endl;
 cout<<"middle "<<a<<endl;
 cout<< "large" <<b<<endl;
 
 }
  
}
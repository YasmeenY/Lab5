/*
This program will print yes if n is divisible by d otherwise it will print no.
*/
#include <iostream>
using namespace std;
bool isDivisibleBy(int n, int d)
{
if(d==0){ //Not divisible by zero
return false;
}
return(n%d==0);
}
int main(){
   int n; //1st number
   int d; //2nd number
   cout<<"Enter 1st number: "; //user input
   cin>>n;
   cout<<"Enter 2nd number: ";
   cin>>d;
   if(isDivisibleBy(n,d)){
      cout<<"Yes"<<endl; 
   }
   else{
      cout<<"No"<<endl;  
   }
   return 0;
}

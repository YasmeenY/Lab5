/*
This program will return the smallest twin prime greater than n.
*/
#include<iostream>
#include<cmath>
using namespace std;

bool isTwinPrime(int n);
bool check_prime(int n);
//main function
int main()
{
int n;
bool res;
cout<<"Enter a number N: ";
cin>>n;
res = isTwinPrime(n);
if(res == true)
cout<<n<<" is twin prime\n";
else
cout<<n<<" is not a twin prime\n";
return 0;
}//end of main function

bool isTwinPrime(int n) //twin function
{
if(((check_prime(n)&& check_prime(n-2))==true) || ((check_prime(n)&& check_prime(n+2))==true))
return true;
else
return false;
}

bool check_prime(int n)
{
if(n<2)
return false;
for(int i=2;i<=sqrt(n);i++)
{
if(n%i == 0)
return false;
}
return true;
}

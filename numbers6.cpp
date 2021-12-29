/*
This program will return the smallest twin prime greater than n.
*/

#include<iostream>
#include<cmath>
using namespace std;

bool isTwinPrime(int n);
int nextTwinPrime(int n);
bool isPrime(int n);

//main function
int main() {
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    n = n+1;
    cout<<"Next prime number :"<<nextTwinPrime(n);
}//end of main function
bool isTwinPrime(int n) { //twin function
    if(((isPrime(n)&& isPrime(n-2))==true) || ((isPrime(n)&& isPrime(n+2))==true))
    return true;
    else
    return false;
}
int nextTwinPrime(int n) {
    int i=n+1,f=0; //flag
    while(1) {
        if(isTwinPrime(i)) //if prime
        return i; //return
        i++; //increment i
    }
    return -1;
}
bool isPrime(int n) { ///Check prime
    for(int i=2;i<n;i++) {
        if(n%i == 0) {
            return false;
        }
    }
    if (n < 2)
    return false;
    return true;
}

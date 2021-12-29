/*
This program will return the largest twin prime in the range a ? N ? b.
*/

#include<iostream>
#include<cmath>
using namespace std;

bool isTwinPrime(int n);
int nextTwinPrime(int n);
int largestTwinPrime(int a, int b);
bool isPrime(int n);

//main function
int main() {
    int a,b,n;
    cout<<"Enter first numbers: ";
    cin>>a;
    cout<<"Enter second numbers: ";
    cin>>b;
    n = largestTwinPrime(a,b);
    if (n!=-1) {
        cout<<"The largest Prime is "<< n <<endl;
    }
    else {
        cout<< "No prime";
    }
    return 0;
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
int largestTwinPrime(int a, int b) {
    int i = b; //start from b
        while(i >= a) { //check until a
            if(isTwinPrime(i)) { //if prime
                return i;
            }
            i--;
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

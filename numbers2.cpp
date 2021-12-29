/*
This program will tell you if the input number is a prime or not using isPrime func.
*/
#include <iostream>
using namespace std;
bool isPrime(int n);
int main() { //main function
    int number;
    cout<<"Enter any number: ";
    cin>>number;
    if (isPrime(number)) //return true if n is a prime, otherwise return false.
    cout<<"prime number";
    else
    cout<<"Not a prime number";
    return 0;
}
bool isPrime(int n) { //needed function
    for(int i=2;i<n;i++) {
        if(n%i == 0) {
            return false;
        }
    }
    if (n < 2)
    return false;
    return true;
}

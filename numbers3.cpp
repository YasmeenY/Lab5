/*
This program will show yoou the next smallest prime number.
*/
#include <iostream>

using namespace std;

bool isPrime(int n);
int nextPrime(int n);

int main()
{
int n;
int f;
cout << "Please enter number: ";
;
cin >> n;
int result = nextPrime(n);
cout << "Next prime to " << n << " is: " << result << endl;
return 0;
}

bool isPrime(int n)
//second function to check true or false
{
for (int f = 2; f <= n - 1; f++)
if (n % f == 0)
return false;
if (n <= 1)
return false;
else
return true;
}

int nextPrime(int n)
// last function as asked in the lab
{
for (int i = n + 1;; i++) {
if (isPrime(i))
//finds whether next number is prime or not
{
return i;
}
}
}

#include<iostream>
#include<cmath>
using namespace std;
bool PrimeOrNot(int n){
    // Handle edge cases
    if (n <= 1) return false;
    if (n == 2) return true; // 2 is a prime number
    // Loop till sqrt(n) to check divisibility
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false; // Not a prime number
        }
    }
    return true; // If no divisors, it's prime
}
int reverse(int n){
    int number = 0;
    while ( n != 0){
        int remainder = n % 10;
        number = number * 10 + remainder;
        n = n / 10;
    }
    return number;
}
int main()
{
    int n;
    cout << "Enter the number to check if it's prime or not: ";
    cin >> n;   
    cout << (PrimeOrNot(n) ? "Prime" : "Non-Prime") << endl;
    cout << "Reverse of " << n << " is: " << reverse(n) << endl;
    return 0;
}

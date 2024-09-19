#include<iostream>
using namespace std;

void primeSieve(int n){
    bool primes[n] = {false};
    for (int i = 2; i * i <= n; i++) {
        if (!primes[i]) { 
            for (int j = i * 2; j <= n; j += i) {
                primes[j] = true;
            }
        }
    }
    // Output all prime numbers
    cout << "All Prime Numbers are: [";
    for (int i = 2; i <= n; i++) {
        if (!primes[i]) {  
            cout << i << ",";
        }
    }
    cout << "]" << endl;
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin >> n;
    primeSieve(n);
    return 0;
} 
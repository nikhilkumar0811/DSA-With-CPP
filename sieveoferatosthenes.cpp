#include <bits/stdc++.h>
using namespace std;

int countprimes(int n)
{
    if (n <= 1)
        return 0; // No primes less than or equal to 1

    int cnt = 0;
    vector<bool> prime(n, true); // Use n, as indices are 0-based
    prime[0] = prime[1] = false; // 0 and 1 are not primes

    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            cnt++;
            for (int j = 2 * i; j < n; j = j + i)
            {
                prime[j] = false; // Mark multiples of i as not prime
            }
        }
    }
    return cnt;
}

int main()
{
    int n;
    cout << "Enter a number to count primes less than it: ";
    cin >> n;

    int primeCount = countprimes(n);
    cout << "There are " << primeCount << " prime numbers less than " << n << "." << endl;

    return 0;
}

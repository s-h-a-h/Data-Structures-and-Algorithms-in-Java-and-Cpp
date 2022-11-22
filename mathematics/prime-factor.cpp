#include <bits/stdc++.h>
using namespace std;

// to check number is prime or not.
bool checkPrime(int numb)
{
    if (numb == 1)
        return false;
    for (int i = 2; i < numb; i++)
    {
        if (numb % i == 0)
        {
            return false;
        }
    }
    return true;
}
// To find prime factor of given number
void primeFactors(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (checkPrime(i))
        {
            int x = i;
            while (n % x == 0)
            {
                cout << i << " ";
                x = x * i;
            }
        }
    }
    // Time complexity O(n2 log(n))
}
int main()
{
    // The prime factorization of any number is the process of writing the number as the product of its prime factors.
    // Example 12 can be written as the product of 2, 2 and 3, as both 2 and 3 are prime factors.
    primeFactors(12);
}
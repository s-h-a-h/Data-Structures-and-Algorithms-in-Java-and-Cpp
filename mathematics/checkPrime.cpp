#include <bits/stdc++.h>
using namespace std;

bool checkPrime (int numb) {
    // Naive method
    if (numb == 1) return false;
    for (int i = 2; i < numb; i++)
    {
        if (numb % i == 0) {
            return false;
        } 
    }
    return true;
    // TIme Complexity: O(n)
}

int main()
{
    bool result = checkPrime(14);
    cout << result << endl;
}
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int numb)
{
    int reverse = 0;
    int temp = numb;

    while (temp > 0)
    {
        int lastDigit = temp % 10;
        reverse = reverse * 10 + lastDigit;
        temp = temp / 10;
    }
    return (reverse == numb);
    //  Idea: Start flipping it from back side and keep decreasing it until zero.
}

int main()
{
    // A number is called palindrome when it's reverse is same as palindrome.
    int numb = 12321;
    bool result = isPalindrome(numb);
    cout << result << endl;
}
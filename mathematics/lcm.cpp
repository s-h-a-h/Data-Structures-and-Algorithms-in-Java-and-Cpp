#include <bits/stdc++.h>
using namespace std;

int lcm (int num1, int num2){
    //Naive Approach
    int result = max(num1, num2);

    while(true){
        if (result % num1 == 0 && result % num2 ==0){
            return result;
        }
        result++;
    }
    return result;
    // Time complexity: O(num1 * num2 - max(num1,num2))
}
// -----------------------------------------------------------
int gcd (int num1 , int num2){
        if (num2  == 0){
            return num1;
        }

        return gcd(num2, num1 % num2);
}

int lcm2 (int num1, int num2){
    // Formula => a * b = gcd(a,b) * lcm(a,b)
    return (num1 * num2) / gcd(num1 , num2);
    // Time complexity: O(log(min(num1,num2)))
}

int main()
{
    cout << lcm(12,24) << endl;
    cout << lcm2(0,20) << endl;
}
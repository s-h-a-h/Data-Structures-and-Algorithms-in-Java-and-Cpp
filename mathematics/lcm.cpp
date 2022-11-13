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

int main()
{
    cout << lcm(7,13) << endl;
}
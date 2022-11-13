#include <bits/stdc++.h>
using namespace std;

int gcd1 (int num1, int num2){
   
    //Naive approach
    int result = min (num1, num2);

    while(result > 0){
        if (num1 % result == 0 && num2 % result == 0){
            break;
        }
        result--;
    }
    return  result;
    // Time complexity: O(min(a, b))
    //Idea: Greatest Common Divisor is always minimum of two number, keep checking till it becomes zero.
}

int gcd2 (int num1, int num2){

    // Euclidean Algo
    while (num1 != num2)        
    {
        if (num1 > num2){
            num1 = num1 - num2;
        }
        else
        {
            num2 = num2 - num1;
        }
    }
    return num1;
    // Time complexity: O(Log min(a, b))
}

int main()
{
    cout << gcd1(18,45) << endl;
    cout << gcd2(18,45) << endl;
}
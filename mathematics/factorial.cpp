#include <iostream>
using namespace std;

int fact1(int numb){

    // Iterative approach
    int factorial = 1;
    for (int i = 1; i <=numb; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
    
}

int fact2(int numb){

    // Recursive Approach
    if (numb == 0){
        return 1;
    }

    return numb*fact2(numb - 1);
    
}
// Idea: Factorial of a number is the multiplication of all positive integers smaller than or equal to the number.

int main()
{
    cout << fact1(0) << endl;
    cout << fact2(0) << endl;
}
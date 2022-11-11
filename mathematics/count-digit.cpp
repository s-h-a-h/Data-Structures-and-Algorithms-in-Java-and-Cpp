#include<iostream>
using namespace std;

int main()
{
    int numb = 4010;
    int noOfDigit = 0;

    while (numb > 0 ){
        numb = numb /10;
        noOfDigit++;
    }
    cout << noOfDigit;
}
// Idea: To count no of digit in a number start removing digit one by one and count. Start removing number from last as it is very easy i.e. number / 10}
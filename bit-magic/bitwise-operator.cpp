
#include<iostream>
using namespace std;

int main(){

    // 1) "&" (bitwise AND) The result of AND is 1 only if both bits are 1, otherwise 0.
    int x = 5, y = 4;
    // convert 5 and 4 into binary => 101 and 100 respectively, => 101 & 100 => 100 => 4
    cout << "<--- bitwise AND --->" << endl;
    cout << (x & y) << endl; // 4

    // 2) "|" (bitwise OR) The result of OR is 1 if any of the two bits is 1, otherwise 0.
    // convert 5 and 4 into binary => 101 and 100 respectively. 101 | 100  => 101 => 5
    cout << "<--- bitwise OR ---->" << endl;
    cout << (x | y) << endl; // 5
    
    // 3) "^" (bitwise XOR) The result of XOR is 1 if the two bits are different, otherwise 0.
    // convert 5 and 4 into binary => 101 and 100 respectively. 101 ^ 100  => 001 => 1
    cout << "<--- bitwise XOR ---->" << endl;
    cout << (x ^ y) << endl; // 1

    // 4) "<<" (left shift) Takes two numbers, left shifts the bits of the first operand, the second operand decides the number of places to shift.
    // convert 5 into binary => 101, 5 << 4 => shift 101 left side 4 bit => 1010000 => 80
    // Shortcut: x << y => x * 2(power y), (5 << 4) => 5 * (2*2*2*2) => 5 * (16) => 80
    cout << "<--- left shift ----->" << endl;
    cout << (x << y) << endl; //80

    // 5) ">>" (right shift) Takes two numbers, right shifts the bits of the first operand, the second operand decides the number of places to shift.
    // convert 5 into binary => 101, 5 >> 4 => shift 101 right side 4 bit => 000 => 0
    // Shortcut: x >> y => x / 2(power y), (5 >> 4) => 5 / (2*2*2*2) => 5 / (16) => 0
    cout << "<--- right shift ----->" << endl;
    cout << (x >> y) << endl; //0

    // 6) "~" (bitwise NOT) Takes one number and inverts all bits of it.
    // convert 5 into binary => 101, invert => 010 & negative sign because of two's complement.
    //SHORTCUT: -(i+1) => -(5+1) => -6
    cout << "<--- bitwise NOT ----->" << endl;
    cout << (~x) << endl; // -6
}
#include <iostream>
using namespace std;

// Check even/odd using bitwise
bool isEven(int n) {
    return (n & 1) == 0;
}

// Count set bits
int countBits(int n) {
    int cnt = 0;
    while (n) {
        n &= (n - 1);
        cnt++;
    }
    return cnt;
}

// Check power of 2
bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

// Reverse bits of 32-bit integer
uint32_t reverseBits(uint32_t n) {
    uint32_t res = 0;
    for (int i = 0; i < 32; i++) {
        res <<= 1;
        res |= (n & 1);
        n >>= 1;
    }
    return res;
}

// Add without +
int addNoPlus(int a, int b) {
    while (b != 0) {
        unsigned carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}

int main() {

    int x = 13;
    int y = 7;

    cout << "Bitwise AND (x & y) = " << (x & y) << endl;
    cout << "Bitwise OR (x | y)  = " << (x | y) << endl;
    cout << "Bitwise XOR (x ^ y) = " << (x ^ y) << endl;
    cout << "Bitwise NOT (~x)    = " << (~x) << endl;
    cout << "Left Shift (x << 1) = " << (x << 1) << endl;
    cout << "Right Shift (x >> 1)= " << (x >> 1) << endl;

    cout << "\nCheck even/odd:" << endl;
    cout << x << " is " << (isEven(x) ? "Even" : "Odd") << endl;

    cout << "\nCount set bits in " << x << " = " << countBits(x) << endl;

    cout << "\nIs " << x << " power of 2? = " 
         << (isPowerOfTwo(x) ? "Yes" : "No") << endl;

    cout << "\nAdd without + : 13 + 7 = " << addNoPlus(13, 7) << endl;

    cout << "\nReverse bits of 5: " << reverseBits(5) << endl;

    return 0;
}
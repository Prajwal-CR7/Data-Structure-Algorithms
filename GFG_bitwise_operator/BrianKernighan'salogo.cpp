// count the number of "set bits" 
// (bits with a value of 1) in the binary representation of an intege
#include<iostream>
using namespace std;
int countBits(int n) {
    int count = 0;
    while (n) {
        n &= (n - 1); // remove the lowest set bit
        count++;
    }
    return count;
}
int main(){
    int n=88;
    countBits(n);
}

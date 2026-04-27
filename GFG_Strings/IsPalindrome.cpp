#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string s) {
    int start = 0;
    int end = s.length() - 1;

    while (start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main() {
    string str = "noon";

    int arr[] = {3, 4, 5, 56, 30};
    int m = sizeof(arr) / sizeof(arr[0]);
    cout << is_palindrome(str);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void printUnion(int a[], int b[], int m, int n) {
    int i = 0, j = 0;

    while (i < m && j < n) {

        // skip duplicates in a
        if (i > 0 && a[i] == a[i - 1]) {
            i++;
            continue;
        }

        // skip duplicates in b
        if (j > 0 && b[j] == b[j - 1]) {
            j++;
            continue;
        }

        if (a[i] < b[j]) {
            cout << a[i++] << " ";
        }
        else if (a[i] > b[j]) {
            cout << b[j++] << " ";
        }
        else {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }

    while (i < m) {
        if (i == 0 || a[i] != a[i - 1])
            cout << a[i] << " ";
        i++;
    }

    while (j < n) {
        if (j == 0 || b[j] != b[j - 1])
            cout << b[j] << " ";
        j++;
    }
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[3] = {4, 5, 6};

    printUnion(a, b, 5, 3);
    cout << endl;

    return 0;
}
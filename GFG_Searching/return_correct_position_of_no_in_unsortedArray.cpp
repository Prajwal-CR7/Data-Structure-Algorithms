#include <bits/stdc++.h>
using namespace std;

int partitionArray(int a[], int low, int high) {
    int pivot = a[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (a[j] <= pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }

    swap(a[i + 1], a[high]);
    return i + 1;
}

int main() {
    int a[5] = {1, 11, 11, 56, 89};
    int n = 5;

    cout << partitionArray(a, 0, n - 1);
    return 0;
}
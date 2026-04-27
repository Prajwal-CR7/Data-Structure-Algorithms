#include <bits/stdc++.h>
using namespace std;

int lamuto(int arr[], int l, int h) {
    int pivot = arr[h];
    int i = l - 1;

    for (int j = l; j < h; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[h]);
    return (i + 1);
}

int main() {
    int arr[7] = {10, 80, 30, 90, 40, 50, 7};
    int l = 0, h = 6;

    cout << lamuto(arr, l, h) << endl;

    for (int x : arr)
        cout << x << " ";

    return 0;
}
// Element Deletion in Array
#include<iostream>
using namespace std;

int delete_ele(int arr[], int x, int n) {
    int pos = -1;

    // find index
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            pos = i;
            break;
        }
    }

    if (pos == -1) return n; // element not found

    // shift elements
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    return n - 1;
}

int main() {
    int arr[10], x = 22, n = 4;
    arr[0] = 11; arr[1] = 22; arr[2] = 33; arr[3] = 44;

    cout << "Before deletion\n";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    n = delete_ele(arr, x, n);

    cout << "\nAfter deletion\n";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
}

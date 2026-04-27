#include <bits/stdc++.h>
using namespace std;

int first_occurrence(int arr[], int n, int x) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] < x)
            low = mid + 1;

        else if (arr[mid] > x)
            high = mid - 1;

        else {
            if (mid == 0 || arr[mid - 1] != x)
                return mid;
            else
                high = mid - 1;
        }
    }
    return -1;
}

int last_occurrence(int arr[], int n, int x) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] < x)
            low = mid + 1;

        else if (arr[mid] > x)
            high = mid - 1;

        else {
            if (mid == n - 1 || arr[mid + 1] != x)
                return mid;
            else
                low = mid + 1;
        }
    }
    return -1;
}

int total_occurrence(int arr[], int n, int x) {
    int first = first_occurrence(arr, n, x);

    if (first == -1)
        return 0;

    int last = last_occurrence(arr, n, x);

    return last - first + 1;
}

int main() {
    int arr[7] = {1, 1, 3, 12, 20, 21, 23};
    int n = 7, x = 1;

    cout << total_occurrence(arr, n, x);
}
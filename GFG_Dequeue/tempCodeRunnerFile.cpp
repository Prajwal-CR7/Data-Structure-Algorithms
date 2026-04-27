// First Negative Number in Every Window of Size k

#include <bits/stdc++.h>
using namespace std;

vector<int> firstNegative(vector<int>& arr, int k) {
    deque<int> dq;  // stores indices of negative elements
    vector<int> res;

    for (int i = 0; i < arr.size(); i++) {

        // add current if negative
        if (arr[i] < 0)
            dq.push_back(i);

        // remove out-of-window indices
        if (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();

        // window formed
        if (i >= k - 1) {
            if (!dq.empty())
                res.push_back(arr[dq.front()]);
            else
                res.push_back(0);
        }
    }

    return res;
}

int main() {
    vector<int> arr = {12, -1, -7, 8, -15, 30, 16, 28};
    int k = 3;

    vector<int> ans = firstNegative(arr, k);

    for (int x : ans) cout << x << " ";
    return 0;
}
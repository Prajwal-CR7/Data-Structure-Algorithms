#include <bits/stdc++.h>
using namespace std;

const int N = 100005;

int n, frame_size;
int pages[N];

void lru_page_replacement() {
    unordered_set<int> s;
    unordered_map<int, int> indexes;

    int page_faults = 0;

    for (int i = 0; i < n; i++) {

        // page hit
        if (s.find(pages[i]) != s.end()) {
            cout << "Page " << pages[i] << " -> HIT\n";
        }
        else {
            cout << "Page " << pages[i] << " -> FAULT\n";

            // if space available
            if (s.size() < frame_size) {
                s.insert(pages[i]);
            }
            else {
                // find LRU
                int lru = INT_MAX, val;

                for (auto it : s) {
                    if (indexes[it] < lru) {
                        lru = indexes[it];
                        val = it;
                    }
                }

                s.erase(val);
                s.insert(pages[i]);
            }

            page_faults++;
        }

        // update last used index
        indexes[pages[i]] = i;
    }

    cout << "\nTotal Page Faults: " << page_faults << endl;
}

int main() {
    cout << "Number of Frames: ";
    cin >> frame_size;

    cout << "Page Reference Stream Length: ";
    cin >> n;

    cout << "Page Reference Stream: ";
    for (int i = 0; i < n; i++) {
        cin >> pages[i];
    }

    lru_page_replacement();

    return 0;
}
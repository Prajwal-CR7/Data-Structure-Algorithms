#include <bits/stdc++.h>
using namespace std;

struct MyHash {
    int BUCKET;
    list<int> *table;

    MyHash(int b) {
        BUCKET = b;
        table = new list<int>[BUCKET];
    }

    void insert(int key) {
        int i = key % BUCKET;
        table[i].push_back(key);
    }

    void search(int key) {
        int i = key % BUCKET;

        for (auto x : table[i]) {
            if (x == key) {
                cout << "Element " << key << " is at index " << i << endl;
                return;
            }
        }

        cout << "Element " << key << " not found\n";
    }

    void deletee(int key) {
        int i = key % BUCKET;
        table[i].remove(key);
    }
};

int main() {
    MyHash mh(7);

    mh.insert(76);
    mh.insert(34);
    mh.insert(6);
    mh.insert(39);

    mh.search(39);
    mh.deletee(34);

    return 0;
}
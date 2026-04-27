#include <bits/stdc++.h>
using namespace std;

struct dequeue {
    int *arr;
    int size;
    int cap;

    dequeue(int c) {
        cap = c;
        size = 0;
        arr = new int[cap];
    }

    bool isfull() { return size == cap; }
    bool empty() { return size == 0; }

    void insertfront(int x) {
        if (isfull()) return;

        for (int i = size - 1; i >= 0; i--) {
            arr[i + 1] = arr[i];
        }
        arr[0] = x;
        size++;
    }

    void insertrear(int x) {
        if (isfull()) return;

        arr[size] = x;
        size++;
    }

    void deletefront() {
        if (empty()) return;

        for (int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    void deleterear() {
        if (empty()) return;
        size--;
    }

    void print() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
    }
};

int main() {
    dequeue d(8);

    d.insertfront(5);
    d.insertfront(4);
    d.insertfront(15);
    d.insertfront(41);
    d.insertrear(20);

    d.deleterear();

    cout << d.size << " is the size\n";
    d.print();

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

struct dqueue {
    int *arr;
    int front, cap, size;

    dqueue(int c) {
        cap = c;
        size = 0;
        front = 0;
        arr = new int[cap];
    }

    bool isfull() { return size == cap; }
    bool isempty() { return size == 0; }

    void insert_front(int x) {
        if (isfull()) return;

        front = (front - 1 + cap) % cap;
        arr[front] = x;
        size++;
    }

    void insert_rear(int x) {
        if (isfull()) return;

        int rear = (front + size) % cap;
        arr[rear] = x;
        size++;
    }

    void delete_front() {
        if (isempty()) return;

        front = (front + 1) % cap;
        size--;
    }

    void delete_rear() {
        if (isempty()) return;

        size--;
    }

    int get_front() {
        if (isempty()) return -1;
        return arr[front];
    }

    int get_rear() {
        if (isempty()) return -1;
        int rear = (front + size - 1) % cap;
        return arr[rear];
    }

    void print() {
        for (int i = 0; i < size; i++) {
            cout << arr[(front + i) % cap] << " ";
        }
    }
};

int main() {
    dqueue s(5);
    s.insert_front(4);
    s.insert_rear(5);
    s.insert_rear(6);
    s.insert_front(11);
    s.delete_rear();

    cout << s.get_rear() << " is rear\n";
    cout << s.get_front() << " is front\n";

    s.print();
}
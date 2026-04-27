// #include <bits/stdc++.h>
// using namespace std;
// struct Queues
// {
//     int *arr;
//     int size;
//     int cap;
//     Queues(int c){
//         cap=c;
//         size=0;
//         arr=new int [cap];
//     }
//     bool isFull(){
//         return (size==cap);
//     }
//     bool Is_Empty(){
//         return (size==0);
//     }
//     void enque(int x){
//         if(isFull()){return;}
//         arr[size]=x;
//         size++;
//     }
//     void deque(){
//         for (int i = 0; i < size-1; i++)
//         {
//             if(Is_Empty()){return;}
//             arr[i]=arr[i+1];
//         }
//         size--;
        
//     }
//     int get_front(){
//         if(Is_Empty()){return -1;}else{return 0;}
//     }
//     int get_rear(){
//         if(Is_Empty()){return -1;}else{return size;}

//     }
// };
// int main(){
//     Queues q(5);
//     q.enque(2);
//     q.enque(3);
//     q.enque(4);
//     q.enque(5);
//     cout<<q.get_front()<<endl;
//     cout<<q.get_rear()<<endl;
//     q.deque();
//     cout<<q.get_front()<<endl;
//     cout<<q.get_rear()<<endl;
//     return 0;
// }
/*  Eficient Solution*/
#include <bits/stdc++.h>
using namespace std;

struct Queue {
    int *arr;
    int cap;
    int size;
    int front;

    Queue(int c) {
        cap = c;
        size = 0;
        arr = new int[cap];
        front = 0;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == cap;
    }

    int rear() {
        if (isEmpty()) return -1;
        return (front + size - 1) % cap;
    }

    int getFront() {
        if (isEmpty()) return -1;
        return arr[front];
    }

    void enqueue(int x) {
        if (isFull()) return;

        int r = rear();
        r = (r + 1) % cap;

        arr[r] = x;
        size++;
    }

    void dequeue() {
        if (isEmpty()) return;

        front = (front + 1) % cap;
        size--;
    }

    void print() {
        for (int i = 0; i < size; i++) {
            cout << arr[(front + i) % cap] << " ";
        }
    }
};
int main(){
    Queue q(5);
    q.enqueue(4);
    cout<<q.rear()<<endl;
    cout<<q.getFront()<<endl;
    q.enqueue(5);
    q.enqueue(6);
    cout<<q.rear()<<endl;
    cout<<q.getFront()<<endl;
    cout<<q.rear()<<endl;
    cout<<q.getFront()<<endl;
    q.enqueue(7);
    q.enqueue(8);
    q.dequeue();
    q.dequeue();
    q.print();

return 0;
}
#include <iostream>
using namespace std;

#define MAX 100

class Queue {
    int arr[MAX];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Check if queue is full
    bool isFull() {
        return (rear == MAX - 1);
    }

    // Check if queue is empty
    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    // Insert element
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is FULL!\n";
            return;
        }

        if (front == -1) front = 0;   // First element
        arr[++rear] = value;
        cout << "Inserted: " << value << endl;
    }

    // Remove element
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is EMPTY!\n";
            return;
        }
        cout << "Deleted: " << arr[front++] << endl;
    }

    // Peek front element
    void peek() {
        if (!isEmpty())
            cout << "Front element: " << arr[front] << endl;
        else
            cout << "Queue is EMPTY!\n";
    }

    // Display queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is EMPTY!\n";
            return;
        }

        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Queue q;
    int n, value;

    cout << "How many elements do you want to insert? ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        q.enqueue(value);
    }

    cout << "\n";
    q.display();
    q.peek();

    q.dequeue();
    q.display();

    return 0;
}

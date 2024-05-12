#include <iostream>

using namespace std;

// Node structure for the linked list
struct Node {
    int data;
    Node* next;

    Node(int d) : data(d), next(nullptr) {}
};

// Function to create a circular linked list of n nodes
Node* createCircularLinkedList(int n) {
    Node* head = nullptr;
    Node* prev = nullptr;

    // Creating n nodes
    for (int i = 1; i <= n; ++i) {
        Node* newNode = new Node(i);
        if (!head) {
            head = newNode;
        } else {
            prev->next = newNode;
        }
        prev = newNode;
    }

    // Making the list circular
    prev->next = head;

    return head;
}

// Function to simulate the Tak Tak Ordak game and find the winner's number
int findWinner(int n) {
    Node* head = createCircularLinkedList(n);
    Node* current = head->next; // Starting from the second person
    Node* prev = head;

    // Removing every second person until only one person remains
    while (head->next != head) {
        // Removing the current person
        prev->next = current->next;
        delete current;
        current = prev->next;

        // Move to the next person (skip one)
        prev = current;
        current = current->next;
        head = prev;
    }

    // Returning the winner's number
    return head->data;
}

int main() {
    int n;
    cin >> n;

    int winner = findWinner(n);
    cout << winner << endl;

    return 0;
}

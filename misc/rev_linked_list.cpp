//prasdud
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()

struct Node {
    int data;
    Node* next;
};

void insert(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr};
    
    if (head == nullptr) {
        head = newNode;
        return;
    }
    
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    
    temp->next = newNode;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

void reverseList(Node* &head){
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        /* code */

    }
    head = prev;
    
}

void solve() {
    Node* head = nullptr;
    insert(head, 23);
    insert(head, 212);
    insert(head, 312);
    insert(head, 231);
    insert(head, 0);
    insert(head, 99);

    cout << "original list"<<endl;
    printList(head);
    reverseList(head);
    cout << "reversed list"<<endl;
    printList(head);
    
    // Your code here
}

int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}



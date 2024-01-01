#include <iostream>

struct Node {
    int data;
    Node* link;
};

int main() {
    Node* head = nullptr;
    head = new Node;
    head->data = 45;
    head->link = nullptr;
    std::cout << head->data; // Output: 45
    delete head;
    return 0;
}

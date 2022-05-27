//Defining the structure of a double linked list
struct Node {
    int data;
    Node *prev;
    Node *next;
    Node(int d) {
        data = d;
        prev = NULL;
        next = NULL;
    }
};

//The structure here is same as that of normal linked list, we need to just make sure that the last element is everytime pointing to initial element
struct Node {
    int data;
    Node *next;
    Node(int d) {
        data = d;
        next = NULL;
    }
};

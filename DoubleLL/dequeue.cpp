struct Node {
    int val;
    Node *prev;
    Node *next;
    Node(int x) {
        val = x;
        prev = NULL;
        next = NULL;
    }
};

struct Dequeue {
    int size;
    Node *front;
    Node *rear;
    
    Dequeue() {
        front = NULL;
        rear = NULL;
        size=0;
    }
    
    void insertFront(int x) {
        Node *temp = new Node(x);
        if(front==NULL) {rear=temp; front=temp;}
        else {
            temp->next = front;
            front->prev = temp;
            front = temp;
        }
        size++;
    }
    
    void insertRear(int x) {
        Node *temp = new Node(x);
        if(rear==NULL) {front=temp;rear=temp;}
        else{
            temp->prev = rear;
            rear->next = temp;
            rear = temp;
        }
        size++;
    }
    
    int getFront() {
        return front->val;
    }
    
    int getRear(){
        return rear->val;
    }
    
    void deleteFront(){
        if(size==0) return;
        Node *temp = front;
        front = front->next;
        if(front==NULL) rear=NULL;
        else front->prev = NULL;
        delete temp;
        size--;
    }
    
    void deleteRear() {
        if(size==0) return;
        Node *temp = rear;
        rear = rear->prev;
        if(rear==NULL) front = NULL;
        else rear->next =NULL;
        delete temp;
        size--;
    }
    
    bool isEmpty() {return size==0;}
};

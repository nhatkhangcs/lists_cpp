#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;
};

class Doubly_Linked_List{
        Node *front;
        Node *end;
	public:
        Doubly_Linked_List(){
            front = NULL;
            end = NULL;
        }
        void add_front(int );
        void add_after(Node* , int );
        void add_before(Node* , int );
        void add_end(int );
        void delete_node(Node*);
        void forward_traverse();
        void backward_traverse();
};

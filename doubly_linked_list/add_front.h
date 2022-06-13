void Doubly_Linked_List::add_front(int data){
    Node* newnode = new Node();
    
    newnode->data = data;
    if(front == NULL){
        
        front = newnode;
        front->prev = NULL;
        end = front;
    }
    
    else {
        newnode->prev = NULL;
        front->prev = newnode;
        newnode->next = front;
        front = newnode;
    }
}

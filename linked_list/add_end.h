void Doubly_Linked_List::add_end(int data){
    Node* newnode = new Node();
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = end;
    if(end == NULL) {
        end = newnode;
        end->next = NULL;
        front = end;
    }
    else {
        end->next = newnode;
        end = newnode;
    }
}

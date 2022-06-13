void Doubly_Linked_List::delete_node(Node* node){
    Node* temp = front;
    while(temp->data != node->data && temp != nullptr){
        temp = temp->next;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    temp->prev = NULL;
    temp->next = NULL;
}

void Doubly_Linked_List::add_after(Node* node, int key){
    Node* temp = front;
    while(temp->data != node->data && temp != nullptr){
        temp = temp->next;
    }

    if(temp == nullptr) cout << "Prev-node no found! \n";
    else{
        Node* add = new Node();
        add->data = key;
        add->prev = temp;
        add->next = temp->next;
        temp->next = add;
        if(add->next != NULL) add->next->prev = add;
    }
}

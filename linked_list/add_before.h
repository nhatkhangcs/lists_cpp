void Doubly_Linked_List::add_before(Node* node, int key){
    Node* temp = end;
    while(temp->data != node->data && temp != nullptr){
        temp = temp->prev;
    }

    if(temp == nullptr) cout << "Prev-node no found! \n";
    else{
        Node* add = new Node();
        add->data = key;
        add->next = temp;
        add->prev = temp->prev;
        temp->prev = add;
        if(add->prev != NULL) add->prev->next = add;
    }
}

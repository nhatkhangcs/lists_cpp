void Doubly_Linked_List::backward_traverse(){
    Node* temp = end;
    while(temp != NULL){
        cout << temp->data << '\n';
        temp = temp->prev;
    }
}

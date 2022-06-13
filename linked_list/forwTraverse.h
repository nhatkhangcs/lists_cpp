void Doubly_Linked_List::forward_traverse(){
    Node* temp = front;
    while(temp != NULL){
        cout << temp->data << '\n';
        temp = temp->next;
    }
}

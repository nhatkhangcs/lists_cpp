#include <iostream>
using namespace std;

int main(){
    Doubly_Linked_List* DLL = new Doubly_Linked_List();
    DLL->add_front(5);
    DLL->add_end(7);
    DLL->add_end(9);
    Node* prevadd = new Node();
    Node* afteradd = new Node();
    afteradd->data = 7;
    prevadd->data = 7;
    DLL->add_after(afteradd, 2);
    DLL->add_before(prevadd, 4);
    DLL->backward_traverse();
    cout << '\n';
    DLL->forward_traverse();
    cout << '\n';

    DLL->delete_node(afteradd);

    DLL->backward_traverse();
    cout << '\n';
    DLL->forward_traverse();
    cout << '\n';

    return 0;
}

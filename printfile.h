void PrinterQueue::print_node() const{
		node* temp = head;
		while (temp != nullptr) {
			cout << temp->s << '\n';
			temp = temp->next;
		}
	}

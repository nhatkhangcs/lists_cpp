void PrinterQueue::addNewRequest(int num, string filename){
	ifstream ifs(filename);

	if(ifs.is_open()){
	string res = "";

	if (head == nullptr) {
			head = new node;
			ifs >> res;
			head->s = res;
			head->next = nullptr;
			head->num = num;
		}

	else {
			node* temp = head;
			while (temp->next != nullptr) {
				temp = temp->next;
			}
			if(ifs.is_open()){
				ifs >> res;
			}
			temp->next = new node();
			temp = temp->next;
			temp->s = res;
			temp->num = num;
			temp->next = nullptr;
		}
	}
}

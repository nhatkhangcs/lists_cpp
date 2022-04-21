#include <iostream>
#include <fstream>
using namespace std;

struct node {
	node* next;
	int num;
	string s;
};

class PrinterQueue {
private:

	node* head;
	string filename;

public:
	string s;

	PrinterQueue(string filename) {
		head = nullptr;
		this->filename = filename;
	}

	void addNewRequest(int num, string filename);
	void print_node() const;

	void sortll();
};

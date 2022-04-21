int main() {
	PrinterQueue p1("Khang");
	p1.addNewRequest(2,"FirstFile.txt");
	p1.addNewRequest(4, "SecondFile.txt");
	p1.addNewRequest(1, "ThirdFile.txt");
	p1.addNewRequest(3, "FourthFile.txt");
	p1.sortll();
	p1.print_node();


	
	return 0;
}

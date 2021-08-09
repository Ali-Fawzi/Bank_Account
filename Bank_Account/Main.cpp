#include"Header.h"

int main() {
	BankAccount Aizen{ "Aizen","998",10000 };
	Aizen.show();
	Aizen.withdraw(20000);//To check if everthing is okay.
	Aizen.show();
}
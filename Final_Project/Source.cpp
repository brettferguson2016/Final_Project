#include <iostream>
#include <stdlib.h>



// !Piggy Bank Project!

using namespace std;

class PiggyBank;



int main() {
	int select;
	cout << "Brett Ferguson Hour 1st" << endl;

	cout << "***************************************" << endl;
	cout << "* 1. Make a depoist in your piggy bank*" << endl;
	cout << "* 2. Break your piggy bank :(         *" << endl;
	cout << "* 3. Exit (won't see final amount)    *" << endl;
	cout << "***************************************" << endl;
	
	cout << "Enter a number:" << endl;
	cin >> select;
	switch (select) {
	case 1:
		cout << "You have selected to make a deposit" << endl;
		cout << "How much would you like to deposit?" << endl;
		cout << "************************" << endl;
		cout << "* 1. 1 cent            *" << endl;
		cout << "* 2. 5 cent            *" << endl;
		cout << "* 3. 10 cent           *" << endl;
		cout << "* 4. 25 cent           *" << endl;
		cout << "* 5. 50 cent           *" << endl;
		cout << "* 6. 1 dollar          *" << endl;
		cout << "* 7. 5 dollar          *" << endl;
		cout << "* 8. 10 dollar         *" << endl;
		cout << "************************" << endl;
	}


	system("pause");
	return 0;
}
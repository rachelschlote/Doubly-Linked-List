#include <iostream>
#include <string>
#include <cstdlib>


using namespace std;

typedef struct list
{
	int data;
	struct list* prev_pointer;
	struct list* next_pointer;
} element;

//list is not circular so it has null ends
element* head = NULL;
element* last = NULL;

bool userInput();
void insertFrontOfList(string value);

int main() {
	bool quit = false;
	do
	{
		quit = userInput();

	} while (!quit);

	return 0;
}

bool userInput() {
	int choice;
	string quit;
	string listItem;
	cout << endl << "----Menu----" << endl
		<< "1. Quit" << endl
		<< "2. Insert" << endl
		<< "Enter Menu Option: ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "Quit for real? (y/n)";
		cin >> quit;
		if ("y" == quit || "Y" == quit) {
			return true;
		}
		return false;
	case 2:
		cout << "Please an Integer Number : ";
		cin >> listItem;
		insertFrontOfList(listItem);
		return false;
	default:
		return false;
	}
}

	void insertFrontOfList(string listItem) {
		cout << "You chose " + listItem;
		
	}




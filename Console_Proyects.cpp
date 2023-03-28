
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	//vector<string> MyStuff = { "Espada", "Cuchillo", "Blaster" };
	//vector<string> Inventory(10);
	//vector<string> Inventory(10, "Empty");
	//vector<string> Inventory(MyStuff);

	vector<string> Inventory;

	Inventory.push_back("Espdada");
	Inventory.push_back("Escudo");
	Inventory.push_back("Martillo");
	
	cout << "You have " << Inventory.size() << " Items" << endl;

	//Interacion FOR
	for (unsigned int i = 0; i < Inventory.size(); i++)
	{
		cout << Inventory[i] << endl;
	}

	cout << "\nYou have " << Inventory[0] << " changed your sword for a bomb";
	Inventory[0] = "Bomba";

	cout << "\n";

	//Iteracion DO-WHILE
	int i = 0;
	do {
		cout << Inventory[i] << endl;
		i++;
	} while (i < Inventory.size());
}

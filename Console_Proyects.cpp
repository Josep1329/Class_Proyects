
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
	
	vector<string> Inventory;
	Inventory.push_back("");
	Inventory.push_back("");
	Inventory.push_back("");
	Inventory.push_back("");
	Inventory.push_back("");

	cout << "You have to choose five items" << endl;
	cin >> Inventory[0];
	cin >> Inventory[1];
	cin >> Inventory[2];
	cin >> Inventory[3];
	cin >> Inventory[4];

	cout << "This are the items " << Inventory.size() << " You have Choosen: " << endl;

	for (unsigned int i = 0; i < Inventory.size(); i++)
	{
		cout << Inventory[i] << endl;
	}
}

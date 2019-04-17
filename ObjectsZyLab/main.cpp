#include <iostream>
#include <string>
#include "ItemToPurchase.h"
using namespace std;

int main(){
	string nameOfItem1, nameOfItem2;
	int priceItem1, priceItem2, quantity1, quantity2, costItem1, costItem2, total;

	ItemToPurchase purchase1;
	ItemToPurchase purchase2;

	cout << "Item 1" << endl << "Enter the item name:" << endl;
	getline(cin, nameOfItem1);

	cout << "Enter the item price:" << endl;
	cin >> priceItem1;

	cout << "Enter the item quantity:" << endl;
	cin >> quantity1;
	cout << endl;

	cin.ignore();

	cout << "Item 2" << endl << "Enter the item name:" << endl;
	getline(cin, nameOfItem2);

	cout << "Enter the item price:" << endl;
	cin >> priceItem2;

	cout << "Enter the item quantity:" << endl;
	cin >> quantity2;
	cout << endl;

	//class object usage
	purchase1.SetName(nameOfItem1);
	purchase1.SetPrice(priceItem1);
	purchase1.SetQuantity(quantity1);

	purchase2.SetName(nameOfItem2);
	purchase2.SetPrice(priceItem2);
	purchase2.SetQuantity(quantity2);

	cout << "TOTAL COST" << endl;

	costItem1 = quantity1 * priceItem1;
	costItem2 = quantity2 * priceItem2;

	total = costItem1 + costItem2;

	cout << purchase1.GetName() << " " << purchase1.GetQuantity() << " @ $" << purchase1.GetPrice() << " = $" << costItem1<< endl;
	cout << purchase2.GetName() << " " << purchase2.GetQuantity() << " @ $" << purchase2.GetPrice() << " = $" << costItem2 << endl;
	cout << endl;

	cout << "Total: $" << total << endl;


	return 0;
}

#include <iostream>
#include <vector>
#include <string>

using namespace std;

#include "ShoppingCart.h"
#include "ItemToPurchase.h"



//default constructor
//all private members are initialized to 0 or none
ShoppingCart::ShoppingCart(){
	customerName = "none";
	currentDate = "January 1, 2016";
	vector <ItemToPurchase> cartItems;
}

//parameterized constructor
ShoppingCart::ShoppingCart(string customer, string date){
	customerName = customer;
	currentDate = date;
}

string ShoppingCart::GetCustomerName() const{
	return customerName;
}

string ShoppingCart::GetDate() const{
	return currentDate;
}

//Adds an item to cartItems vector. Has parameter ItemToPurchase. Does not return anything.
/*
	ADD ITEM TO CART
	Enter the item name:
	Nike Romaleos
	Volt color, Weightlifting shoes
	Enter the item price:
	189
	Enter the item quantity:
	2

*/
void ShoppingCart::AddItem(ItemToPurchase object){
	string nameItem, itemDescription;
	int priceItem, quantityItem;


	cout << "ADD ITEM TO CART" << endl;

	cout << "Enter the item name:" << endl;
	getline(cin, nameItem);
	cout << endl;
	cin.ignore();

	cout << "Enter the item description:";
	getline(cin, itemDescription);
	cout << endl;

	cout << "Enter the item price:" << endl;
	cin >> priceItem;
	cout << endl;

	cout << "Enter the item quantity:" << endl;
	cin >> quantityItem;
	cout << endl;

	//called the ItemToPurchase objects
	object.SetName(nameItem);
	object.SetDescription(itemDescription);
	object.SetPrice(priceItem);
	object.SetQuantity(quantityItem);

	//add to vector
	cartItems.push_back(object); 
	
}

//Removes item from cartItems vector. Has a string (an item's name) parameter. Does not return anything.
//If item name cannot be found, output this message: Item not found in cart. Nothing removed.
void ShoppingCart:: RemoveItem(string name){
	ItemToPurchase createObjectForOperator;
	/*
		REMOVE ITEM FROM CART
		Enter name of item to remove:
		Chocolate Chips

	*/

	cout << "REMOVE ITEM FROM CART" << endl;
	cout << "Enter name of item to remove:" << endl;
	getline(cin, name);
	cout << endl;

	for ( unsigned int i = 0; i < sizeof(cartItems); ++i){
		createObjectForOperator = cartItems.at(i);
		if (createObjectForOperator.GetName() == name){
			cartItems.erase(cartItems.begin() + i);
		}
		else {
			cout << "Item not found in cart. Nothing removed." << endl;

		}
	}

}

/*
Modifies an item's description, price, and/or quantity. Has parameter ItemToPurchase. Does not return anything.
If item can be found (by name) in cart, check if parameter has default values for description, price, and quantity. 
If not, modify item in cart.
If item cannot be found (by name) in cart, output this message: Item not found in cart. Nothing modified.
*/
void ShoppingCart::ModifyItem(ItemToPurchase object){
	string nameItem;
	int newQuantity;
	ItemToPurchase createObjectForOperator;

	cout << "CHANGE ITEM QUANTITY" << endl;
	cout << "Enter the item name:" << endl;
	getline(cin, nameItem);
	cout << endl;
	

	for (unsigned int i = 0; i < sizeof(cartItems); ++i){
		createObjectForOperator = cartItems.at(i);
		if (createObjectForOperator.GetName() == nameItem){
			//if the object does not have default values for description, price, and quantity, then
			if (object.GetDescription() != "none" && object.GetQuantity() != 0 && object.GetPrice() != 0){
				//modify the item in the cart
				cout << "Enter the new quantity:" << endl;
				cin >> newQuantity;
				cout << endl;
				object.SetQuantity(newQuantity);
			}
		}
		//if item cannot be found by name in cart, then display message below
		else{
			cout << "Item not found in cart. Nothing modified" << endl;
		}
	}

}

//Returns quantity of all items in cart. Has no parameters.
int ShoppingCart:: GetNumItemsInCart() const{
	int count = 0;

	for (unsigned int i = 0; i < sizeof(cartItems); ++i){

		count += 1; //add number of items in the cart
	}

	return count;
}


//Determines and returns the total cost of items in cart. Has no parameters.
int ShoppingCart:: GetCostOfCart() const{
	ItemToPurchase accessMember;
	int totalCost = 0;
	for (unsigned int i = 0; sizeof(cartItems); ++i){
		if (accessMember.GetPrice() >= 0){
			totalCost += accessMember.GetPrice() * accessMember.GetQuantity();
		}
	}
	
	return totalCost;
}

/*
PrintTotal() output:

Outputs total of objects in cart.
If cart is empty, output this message: SHOPPING CART IS EMPTY

John Doe's Shopping Cart - February 1, 2016
Number of Items: 8

Nike Romaleos 2 @ $189 = $378
Chocolate Chips 5 @ $3 = $15
Powerbeats 2 Headphones 1 @ $128 = $128

Total: $521

*/

void ShoppingCart::PrintTotal(){

	ShoppingCart classobjects;
	ItemToPurchase object;
	cout << classobjects.GetCustomerName() << "'s Shopping Cart - " << classobjects.GetDate() << endl;
	cout << "Number of Items: " << classobjects.GetNumItemsInCart() << endl;
	cout << endl;

	for (unsigned int i = 0; i < sizeof(cartItems); ++i){
		cout << object.GetName() << " " <<  object.GetQuantity() << "@ $" << object.GetPrice() << " = $" << object.GetPrice() * object.GetQuantity() << endl;
	}
	cout << endl;
	//total cost of all items in cart taking into consideration the quantity
	cout << "Total: $" << classobjects.GetCostOfCart() << endl;


}


/*
PrintDescriptions() output:

Outputs each item's description.

John Doe's Shopping Cart - February 1, 2016

Item Descriptions
Nike Romaleos: Volt color, Weightlifting shoes
Chocolate Chips: Semi-sweet
Powerbeats 2 Headphones: Bluetooth headphones

*/

void ShoppingCart::PrintDescriptions(){
	ShoppingCart classobjects;
	ItemToPurchase object;

	cout << classobjects.GetCustomerName() << "'s Shopping Cart - " << classobjects.GetDate() << endl;
	cout << endl;

	cout << "Item Descriptions" << endl;
	for (unsigned int i = 0; sizeof(cartItems); ++i){
		cout << object.GetName() << object.GetDescription() << endl; 
	}

}

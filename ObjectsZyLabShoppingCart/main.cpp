#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <stdlib.h>

using namespace std;


#include "ItemToPurchase.h"
#include "ShoppingCart.h"


/*

Implement the PrintMenu() function. 
PrintMenu() has a ShoppingCart parameter, 
and outputs a menu of options to manipulate 
the shopping cart. Each option is represented 
by a single character. Build and output the menu
within the function.

If the an invalid character is entered, 
continue to prompt for a valid choice. 
Hint: Implement Quit before implementing other options. 
Call PrintMenu() in the main() function. Continue to execute 
the menu until the user enters q to Quit. (3 pts) 

MENU
a - Add item to cart
d - Remove item from cart
c - Change item quantity
i - Output items' descriptions
o - Output shopping cart
q - Quit

Choose an option:


*/

void PrintMenu(ShoppingCart obj){
	char userPrompt;

	do{
		cout << "MENU\n" << "a - Add item to cart\n" << "d - Remove item from cart\n" << "c - Change item quantity\n" <<
		"i - Output items' descriptions\n" << "o - Output shopping cart\n" << "q - Quit\n";
		cout << endl;

		cout << "Choose an option:" << endl;
		cin >> userPrompt;

		switch(userPrompt){
			case 'a':
			{
				ItemToPurchase objectOfPurchase;
				obj.AddItem(objectOfPurchase);
			}
			break;
			case 'd':
			{
				string nameItem;
				obj.RemoveItem(nameItem);
			}
				
			break;

			case 'c':
			{
				ItemToPurchase forChangingQuantity;
				obj.ModifyItem(forChangingQuantity);
			}
				
			break;

			case 'i':
			{
				obj.PrintDescriptions();
			}
			break;

			case 'o':
			{
				obj.PrintTotal();
			}
			break;

			case 'q':
			{
				exit(0);
			}
            break;

            default:
            {
            	cin.ignore();
            	cout << "Incorrect Input: " << endl;
            	cin >> userPrompt;
            	cout << endl;
            }
            	
            break;

		}

	}
	while(userPrompt!= 'q');

}

int main(){

	/*
	In main(), prompt the user for a customer's name and today's date. 
	Output the name and date. Create an object of type ShoppingCart. (1 pt)

	Enter customer's name:
	John Doe
	Enter today's date:
	February 1, 2016

	Customer name: John Doe
	Today's date: February 1, 2016

	*/

	string nameOfCustomer, todayDate;
	ShoppingCart object;

	cout << "Enter customer's name:" << endl;
	getline(cin, nameOfCustomer);
	cout << endl;

	cin.ignore();

	cout << "Enter today's date:" << endl;
	getline(cin, todayDate);
	cout << endl << endl;

	cout << "Customer name: " << object.GetCustomerName() << endl;
	cout << "Today's date: " << object.GetDate() << endl;

	PrintMenu(object);


	return 0;
}

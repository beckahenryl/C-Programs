#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <stdlib.h>

using namespace std;


#include "ItemToPurchase.h"
#include "ShoppingCart.h"
//#include "ShoppingCart.cpp"
//#include "ItemToPurchase.cpp"

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

void PrintMenu(ShoppingCart obj){//fixed
	char userPrompt;

	cout << "MENU\n" << "a - Add item to cart\n" << "d - Remove item from cart\n" << "c - Change item quantity\n" <<
    "i - Output items' descriptions\n" << "o - Output shopping cart\n" << "q - Quit\n";
    cout << endl;

	do{



		cout << "Choose an option:" << endl;
		cin >> userPrompt;

		switch(userPrompt){
			case 'a'://fixed
			{
				ItemToPurchase objectOfPurchase;
				obj.AddItem(objectOfPurchase);
				cout << "MENU\n" << "a - Add item to cart\n" << "d - Remove item from cart\n" << "c - Change item quantity\n" <<
                "i - Output items' descriptions\n" << "o - Output shopping cart\n" << "q - Quit\n";
                cout << endl;
			}
			break;
			case 'd': //fixed

			{
				string nameItem;
				obj.RemoveItem(nameItem);
				cout << endl;
				cout << "MENU\n" << "a - Add item to cart\n" << "d - Remove item from cart\n" << "c - Change item quantity\n" <<
                "i - Output items' descriptions\n" << "o - Output shopping cart\n" << "q - Quit\n";
                cout << endl;
			}

			break;

			case 'c':
			{
				ItemToPurchase forChangingQuantity;
				obj.ModifyItem(forChangingQuantity);
				cout << endl;
				cout << "MENU\n" << "a - Add item to cart\n" << "d - Remove item from cart\n" << "c - Change item quantity\n" <<
                "i - Output items' descriptions\n" << "o - Output shopping cart\n" << "q - Quit\n";
                cout << endl;
			}

			break;

			case 'i'://fixed
			{
				cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
				cout << obj.GetCustomerName() << "'s Shopping Cart - " << obj.GetDate() << endl;
				cout << endl;
				obj.PrintDescriptions();
				cout << endl;
				cout << "MENU\n" << "a - Add item to cart\n" << "d - Remove item from cart\n" << "c - Change item quantity\n" <<
                "i - Output items' descriptions\n" << "o - Output shopping cart\n" << "q - Quit\n";
                cout << endl;
			}
			break;

			case 'o'://fixed
			{
			    cout << "OUTPUT SHOPPING CART" << endl;
				cout << obj.GetCustomerName() << "'s Shopping Cart - " << obj.GetDate() << endl;
				cout << "Number of Items: " << obj.GetNumItemsInCart() << endl;
				cout << endl;
				obj.PrintTotal();
				cout << endl;

				//total cost of all items in cart taking into consideration the quantity
				cout << "Total: $" << obj.GetCostOfCart() << endl;
				cout << endl;
				cout << "MENU\n" << "a - Add item to cart\n" << "d - Remove item from cart\n" << "c - Change item quantity\n" <<
                "i - Output items' descriptions\n" << "o - Output shopping cart\n" << "q - Quit\n";
                cout << endl;
			}
			break;

			case 'q':
			{
				exit(0);
			}
            break;

            default:
            {
            	cout << "Choose an option:" << endl;
				cin >> userPrompt;
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

	cout << "Enter today's date:" << endl;
	getline(cin, todayDate);
	cout << endl;


	object.SetCustomerName(nameOfCustomer);
	object.SetDate(todayDate);

	cout << "Customer name: " << object.GetCustomerName() << endl;
	cout << "Today's date: " << object.GetDate() << endl << endl;

	PrintMenu(object);





	return 0;
}

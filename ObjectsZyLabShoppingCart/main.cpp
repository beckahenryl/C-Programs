#include <iostream>
#include <string>
#include <ShoppingCart.h>

using namespace std;

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

void PrintMenu(ShoppingCart param){
	char userPrompt;

	do{
		cout << "MENU\n" << "a - Add item to cart\n" << "d - Remove item from cart\n" << "c - Change item quantity\n" <<
		"i - Output items' descriptions\n" << "o - Output shopping cart\n" << "q - Quit\n";
		cout << endl;

		cout << "Choose an option:" << endl;
		getline(cin, userPrompt);

		switch(userPrompt){
			//Add item to cart
			case 'a':
			break;

			//Remove item from cart
			case 'd':
			break;

			//Change item quantity
			case 'c':
			break;

			//Output items' descriptions
			case 'i':
			break;

			//Output shopping cart
			case 'o':
				/*

				OUTPUT SHOPPING CART
				John Doe's Shopping Cart - February 1, 2016
				Number of Items: 8

				Nike Romaleos 2 @ $189 = $378
				Chocolate Chips 5 @ $3 = $15
				Powerbeats 2 Headphones 1 @ $128 = $128

				Total: $521
				*/

			break;

			//quit
			case 'q':
				exit(0);
            break;

            default:
            	cin.ignore();
            	cout << "Incorrect Input: " << endl;
            	getline(cin, userPrompt);
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





	return 0;
}
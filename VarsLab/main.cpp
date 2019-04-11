#include <iostream>
#include <string>
using namespace std;

int main(){
	const double roseStemCost = 3.75;
	const double poundChocolates = 14.20;
	int userRoses;
	int deliveryCost = 5;
	double userChocolates;
	double billRoses;
	double billChocolates;
	double billTotal;
	string userMessage;

	cout << "Welcome to BeMine!" << endl;
	cout << "How many roses would you like to purchase at $" << roseStemCost << " a stem?" << endl;
	cin >> userRoses;
	cout << "How much chocolate would you like to purchase at $" << poundChocolates << " a pound?" << endl;
	cin >> userChocolates;
	cout << "Enter your personal message" << endl;
	cin.ignore();
	getline(cin, userMessage);
	cout << "\n\n";

	billRoses = roseStemCost * (double)userRoses;
	billChocolates = poundChocolates * userChocolates;
	billTotal = double(deliveryCost) + billRoses + billChocolates;

	cout << "ORDER DETAILS:" << endl;
	cout << userRoses << " at $" << roseStemCost << " = " << billRoses << endl;
	cout << userChocolates << " at $" << poundChocolates << " = " << billChocolates << endl;
	cout << "With a special note:" << endl;
	cout << "\t" << userMessage << endl;
	cout << "Thank you for shopping at BeMine!" << endl;
	cout << "Your total bill is $" << billTotal << endl;

	return 0;

}

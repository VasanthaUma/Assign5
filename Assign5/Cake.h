#pragma once
#include <iostream>
#include <string>
using namespace std;
class Cake
{
	private:
		int ID;
		static int IDGenerator;
		string cType;
		string cFlavour;
		string cTopping;
		int qty;
		double price;

	public:
		Cake();
		void getCake();
		void putCake();
	};
/* intialize the static variable to be used
when generating the ID */
int Cake::IDGenerator = 1;
// Constructor
Cake::Cake()
{
	ID = IDGenerator++;
	cType = "";
	cFlavour = "";
	cTopping = "";
	qty = 0;
	price = 0;
}

// gets input from the user for the cake object
void Cake::getCake()
{
	cin.ignore();
	cin.clear();
	cout << "Enter Cake Type" << endl;
	getline(cin, cType);
	cout << "Enter Cake Flavour" << endl;
	getline(cin, cFlavour);
	cout << "Enter Cake topping" << endl;
	getline(cin, cTopping);
	cout << "Enter Quantity" << endl;
	cin >> qty;
	cout << "Enter Price" << endl;
	cin >> price;
	cin.ignore();
	cin.clear();
}
void Cake::putCake()
{
	cout<< ID << "\t" << cType
		<< "\t" << cFlavour
		<< "\t" << "  " << cTopping
		<< "\t" << "\t"  << qty << "\t" << price << endl;
}
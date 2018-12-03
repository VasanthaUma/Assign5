/* Developed by Vasantha Buddiga
using Cake Class in Project
 Display different Kinds of Cakes like Cup cakes,
sheet cakes, wedding cakes etc. with differnt flavours
and toppings
*/
#include <iostream>
#include <string>
#include "Cake.h"
using namespace std;
int main()
{
	system("color F0");
	char answer = 'N';
	do {
		Cake c[100]; //object array
		int n, i;
		cout << "Enter number of Cake Items[1-100] : ";
		cin >> n;
		if (n < 1 || n>=100)
			cout << "Value must be between 1 to 100 only " << endl;
		else
			for (i = 0; i < n; i++)
				c[i].getCake();
		cout << endl;
		cout << "\t \t     My Favorite Food - Cakes "<<endl;
		cout << "\t \t     __________________________ \n " << endl;
		cout << "ID \t Type     \t Flavour \t topping \t Quantity \t Price \n";
		cout << "_____________________________________________________________________________\n";
		for (i = 0; i < n; i++)c[i].putCake();
		cout << "______________________________________________________________________________\n";
		cout << "do you want to enter another Cake Item? enter Y to continue ? ";
		cin >> answer;

		// need to clear the input buffer before asking for another item
		cin.ignore();
		cin.clear();

	} while (answer == 'Y' || answer == 'y');

	cout << "good bye!" << endl;

	system("pause");
	return 0;
}
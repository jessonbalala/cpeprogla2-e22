#include <iostream>
#include <iomanip>
using namespace std;
struct item{
	int id;
	char name[50];
	double price;
};
void newLine();

int main()
{
	item itm[5];
	int i;
	cout << "ENTER 5 ITEMS:\n";
	for(i=0; i<5; i++)
	{
		cout << "\nITEM " << (i+1) << endl;
		cout << "ID: ";
		cin >> itm[i].id;
		newLine();
		cout << "Name: ";
		cin.getline(itm[i].name,49);
		cout << "Price: ";
		cin >> itm[i].price;
	}
cout << setw(10) <<"Item #"
			<< setw(16) << "Item Code"
			<< setw(30) << "Name"
			<< setw(10) << "Price";
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	for(i=0; i<5; i++)
	{
		cout << endl;
		cout << setw(10) << i+1
			<< setw(16) << itm[i].id
			<< setw(30) << itm[i].name
			<< setw(10) << itm[i].price;
	}

	system("pause > 0");
	return 0;
}
void newLine()
{
	char s;
	do{ 
		cin.get(s); 
		}while(s!='\n');
}



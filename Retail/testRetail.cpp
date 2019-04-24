#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>
#include "RetailItem.h"

using namespace std;

// Function prototypes
void loadItems(vector<RetailItem> &items);

// demonstrating how to push to github
int main()
{
	vector<RetailItem> stockItems;

	loadItems(stockItems);
	float totalValue = 0;

	cout << "Description \tPrice \tOn Hand \tValue \n";
	cout << "-----------------------------------------------" << endl;

	for (int i = 0; i < stockItems.size(); i++)
	{
		cout << fixed << showpoint << setprecision(2);
		cout << stockItems[i].getDescription() << "\t\t" << stockItems[i].getPrice() << "\t" << stockItems[i].getUnitsOnHand() << "\t" << stockItems[i].getStockValue() << endl;
		totalValue += stockItems[i].getStockValue();
	}

	cout << fixed << showpoint << setprecision(2);
	cout << endl << "Total inventory value: " << totalValue << endl;


	return 0;
}

// function laods data from file to create instances of RetailItem
void loadItems(vector<RetailItem> &items)
{
	string description, unitsStr, priceStr;
	int units;
	double price;

	ifstream retailData;
	retailData.open("Lab7Task3data.csv");

	while (getline(retailData, description, ','))
	{
		getline(retailData, unitsStr, ',');
		retailData >> priceStr;
		retailData.ignore(80, '\n');

		RetailItem temp(description, stoi(unitsStr), stof(priceStr));
		items.push_back(temp);
	}

	retailData.close();	
}
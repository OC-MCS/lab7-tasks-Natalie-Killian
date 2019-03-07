#pragma once

#include <string>
#include <iostream>

using namespace std;

class RetailItem
{
private:
	string description;
	int unitsOnHand;
	double price;
public:
	RetailItem();
	RetailItem(string des, int units, double cost);
	float getStockValue();
	string getDescription();
	int getUnitsOnHand();
	double getPrice();

};
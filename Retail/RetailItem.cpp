#include <string>
#include <iostream>
#include "RetailItem.h"

using namespace std;

// default constructor
RetailItem::RetailItem()
{
	description = "";
	unitsOnHand = 0;
	price = 0;
}

// constructor that accepts input 
RetailItem::RetailItem(string des, int units, double cost)
{
	description = des;
	unitsOnHand = units;
	price = cost;

}

// member function that returns float indicating the total value of the stock on hand
float RetailItem::getStockValue()
{
	float stock;

	stock = (static_cast<float>(unitsOnHand) * price);

	return stock;
}

// member function that returns RetailItem description 
string RetailItem::getDescription()
{
	return description;
}

// member function that returns RetailItem unitsOnHand
int RetailItem::getUnitsOnHand()
{
	return unitsOnHand;
}

// member function that returns RetailItem price
double RetailItem::getPrice()
{
	return price;
}
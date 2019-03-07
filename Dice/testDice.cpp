#include <iostream>
#include <cstdlib>
#include <ctime>   
#include <iomanip>
#include "Die.h"

using namespace std;

// Function prototype
void displayPct(int array[], int size);

int main()
{
	int countSix[7] = {0,0,0,0,0,0,0};
	int countTwelve[13] = {0,0,0,0,0,0,0,0,0,0,0,0,0};
	Die d1(6);
	Die d2(12);
	int value;


	// Roll six sided die
	for (int i = 0; i < 1000000; i++)
	{
		d1.roll();
		value = d1.getValue();
		countSix[value]++;
		
	}

	displayPct(countSix, 7);

	// Roll twelve sided die
	for (int i = 0; i < 1000000; i++)
	{
		d2.roll();
		value = d2.getValue();
		countTwelve[value]++;

	}
	
	displayPct(countTwelve, 13);



	return 0;
}

// Display function 
void displayPct(int array[], int size)
{
	cout << "Stats for " << size - 1 << " die: \n";
	cout << fixed << showpoint << setprecision(2);

	for (int i = 1; i < size; i++)
	{
		cout << "Side   " << i << ":  ";
		cout << (static_cast<float>(array[i]) / 1000000) * 100 << "%\n";
	}
	
	cout << endl;

}
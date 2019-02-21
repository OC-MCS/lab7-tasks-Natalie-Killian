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
		switch (value)
		{
			case 1: countSix[1]++;
				break;
			case 2: countSix[2]++;
				break;
			case 3: countSix[3]++;
				break;
			case 4: countSix[4]++;
				break;
			case 5: countSix[5]++;
				break;
			case 6: countSix[6]++;
		}
	}

	displayPct(countSix, 7);

	// Roll twelve sided die
	for (int i = 0; i < 1000000; i++)
	{
		d2.roll();
		value = d2.getValue();
		switch (value)
		{
		case 1: countTwelve[1]++;
			break;
		case 2: countTwelve[2]++;
			break;
		case 3: countTwelve[3]++;
			break;
		case 4: countTwelve[4]++;
			break;
		case 5: countTwelve[5]++;
			break;
		case 6: countTwelve[6]++;
			break;
		case 7: countTwelve[7]++;
			break;
		case 8: countTwelve[8]++;
			break;
		case 9: countTwelve[9]++;
			break;
		case 10: countTwelve[10]++;
			break;
		case 11: countTwelve[11]++;
			break;
		case 12: countTwelve[12]++;
		}

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
		cout << (array[i] / 1000000) * 100 << "%\n";
	}
	
	cout << endl;

}
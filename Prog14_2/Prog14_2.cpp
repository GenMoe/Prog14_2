#include <iostream>
#include <iomanip>
#include "Budget.h"
using namespace std;


int main()
{
	int count;						//<----Loop counter
	double mainOfficeRequest;		
	const int NUM_DIVISIONS = 4;

	cout << "Enter the main office's budget request: ";
	cin >> mainOfficeRequest;		//<-----gets budget val for msinOffice.
	Budget::mainOffice(mainOfficeRequest);    //<-----stores budget val for mainOffice.

	Budget divisions[NUM_DIVISIONS];
	AuxiliaryOffice auxOffices[4];
	// Gets the budget requests for each division as well as auxiliary
	for (count = 0; count < NUM_DIVISIONS; count++)
	{
		double budgetAmount;	

		cout << "Enter the budget request for division ";
		cout << (count + 1) << ": ";
		cin >> budgetAmount;		//<-----Get the budget desiered from each division.
		divisions[count].addBudget(budgetAmount);    //<-----stores budget val for division.

		//AuxOffice req
		cout << "Enter the budget request for that divison's\n";
		cout << "auxiliary office: ";
		cin >> budgetAmount;
		auxOffices[count].addBudget(budgetAmount, divisions[count]);
	}
	//Displays budgie request as well as corprate budget.
	cout << fixed << showpoint << setprecision(2);
	cout << "\nHere are the divisions budget requests:\n";
	for (count = 0; count < NUM_DIVISIONS; count++)
	{
		cout << "\tDivison " << (count + 1) << "\t$ ";
		cout << divisions[count].getDivisionBudget() << endl;
		cout << "\tAuxiliary office:\t$ ";
		cout << auxOffices[count].getDivisionBudget() << endl << endl;
	}
	cout << "\tTotal Budget Requests (including main office):\t$ ";
	cout << divisions[0].getCorpBudget() << endl;
	return 0;
}

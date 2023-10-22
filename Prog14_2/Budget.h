#pragma once
#ifndef BUDGET_H
#define BUDGET_H
#include "Auxil.h"
using namespace std;

// init class dubgie
class Budget
{
private:
	static double corpBudget;		//<---static cuz it fluctuates
	double divisionBudget;
public:
	Budget()
	{
		divisionBudget = 0;
	}
	void addBudget(double b)
	{
		divisionBudget += b;
		corpBudget += b;
	}
	double getDivisionBudget() const
	{
		return divisionBudget;
	}
	double getCorpBudget() const
	{ return corpBudget; }

	static void mainOffice(double);

	friend void AuxiliaryOffice::addBudget(double, Budget&);
};
#endif
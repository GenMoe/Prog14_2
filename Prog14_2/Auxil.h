#pragma once
#ifndef AUXIL_H
#define AUXIL_H

class Budget; // <---passing the budget class init from before to here

//initiation of auxiliary class
class AuxiliaryOffice
{
private:
	double auxBudget;
public:
	AuxiliaryOffice()
	{
		auxBudget = 0;
	}
	double getDivisionBudget() const
	{
		return auxBudget;
	}
	void addBudget(double, Budget&);
};
#endif
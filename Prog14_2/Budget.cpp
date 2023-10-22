#include "Budget.h"


double Budget::corpBudget = 0;

//Definition of static member funct mainOffice.
//This funct adds th emain oofice budget request
//to thr corpBudget variable.

void Budget::mainOffice(double moffice)
{
	corpBudget += moffice;
}
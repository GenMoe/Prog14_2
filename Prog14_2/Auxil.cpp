#include "Auxil.h" 
#include "Budget.h"

//function is declared a friend(locally) by the Budget class. 
// It adds the value of argument b to the static corpBudget member variable of the Budget class

void AuxiliaryOffice::addBudget(double b, Budget & div)
{
	auxBudget += b;
	div.corpBudget += b;
}
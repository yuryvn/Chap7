#define _CRT_SECURE_NO_WARNING
#include "stdafx.h"
#include "DynamicMemory.h"
#include <string>
#include <assert.h>


using namespace std;

int EmployeeShortT::Counter = 0;

int EmployeeShortT::getCounter(){ return Counter; }

const char *EmployeeShortT::getName(){ return Name; }
const char *EmployeeShortT::getSurname(){ return Surname; }

EmployeeShortT::EmployeeShortT(char *N, char *S)
{
	Counter++;

	Name = new char[strlen(N) + 1];
	assert(Name != 0);
	strcpy_s((*Name)[strlen(N) + 1], N);
	//strcpy(Name, N);

	Surname = new char[strlen(S) + 1];
	assert(Surname != 0);
	strcpy(Surname, S);

}

EmployeeShortT::~EmployeeShortT()
{
	delete [] (Name);
	delete[](Surname);
	Counter--;
		
}
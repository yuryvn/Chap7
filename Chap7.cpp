// Chap7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ClassesChap7.h"
#include "DynamicMemory.h"

using namespace std;

int *ArrayPTR;
int **MatrixPTR;

DateT CurrentDate;

void SetDag(DateT & data, int value){
	data.D = value;
	return;
}

int _tmain(int argc, _TCHAR* argv[])
{
//making a matrix as pointer to array of pointers
	MatrixPTR = new int*[8];
	ArrayPTR = new int[8];
	for (int i = 0; i < 8; i++){
		*(MatrixPTR + i) = new int[ 8 ];
		for (int y = 0; y < 8; y++){
			*(*(MatrixPTR + i) + y) = i * 8 + y + 1;
		}
	}

	cout << *(*(MatrixPTR + 2) + 1) << endl;
//matrix end

	EmployeeShortT *Em1 = new EmployeeShortT("Hren", "morzhovii"), *Em2 = new EmployeeShortT("vasya", "lyutikov");

	cout << (*Em2).getCounter;

	return 0;
}


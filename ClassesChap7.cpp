#include "stdafx.h"
#include "ClassesChap7.h"
#include <string>

using namespace std;

DateT::DateT(int Day, int Month, int Year){
	Set(Day, Month, Year);
}

DateT::~DateT(){}

int DateT::CheckDay(int TestDay){
	int DaysinMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (M == 2){
		if (TestDay == 29 && (Y % 400 == 0 || (Y % 4 == 0 && Y % 100 != 0))){
			return TestDay;
		}
	}

	if (TestDay > 0 && TestDay <= DaysinMonth[M - 1]) return TestDay;

	cout << "incorrect day, setting day=1" << endl;
	return 1;
}

void DateT::Set(int DD, int MM, int YYYY){
	if (MM > 0 && MM <= 12) M = MM;
	else {
		cout << "incorrect month, setting M=1" << endl;
		M = 1;
	}

	if (YYYY > 1969 && YYYY < 2016) Y = YYYY;
	else {
		cout << "incorect year, settin Y=1970";
		Y = 1970;
	}
	D = CheckDay(DD);
}

void DateT::Print() const {
	cout << D << "/" << M << "/" << Y << endl;
}



EmployeeT::EmployeeT(char *Navn, char *SurNavn, int BD, int BM, int BY, int HD, int HM, int HY){

}
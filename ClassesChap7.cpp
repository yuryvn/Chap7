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

DateT &DateT::SetDay(int a){
	D = CheckDay(a);
	return *this;
}

DateT &DateT::SetMonth(int a){
	if (a > 0 && a <= 12) M = a;
	else {
		cout << "incorrect month, setting M=1" << endl;
		M = 1;
	}
	return *this;
}

DateT &DateT::SetYear(int a){

	if (a > 1969 && a < 2016) Y = a;
	else {
		cout << "incorect year, settin Y=1970";
		Y = 1970;
	}
	return *this;
}


void DateT::Set(int DD, int MM, int YYYY){
	SetYear(YYYY).SetMonth(MM).SetDay(DD);
}

void DateT::Print() const {
	cout << D << "/" << M << "/" << Y;
}



EmployeeT::EmployeeT(char *Navn, char *SurNavn, int BD, int BM, int BY, int HD, int HM, int HY)
	:BirthDate(BD, BM, BY), HireDate(HD,HM,HY)
{
	Name = Navn;
	Surname = SurNavn;
}

EmployeeT::~EmployeeT(){}

void EmployeeT::Set(char *Navn, char *SurNavn, int BD, int BM, int BY, int HD, int HM, int HY){
	Name = Navn;
	Surname = SurNavn;
	BirthDate.Set(BD, BM, BY);
	HireDate.SetYear(HY).SetMonth(HM).SetDay(HD);
}

void EmployeeT::Print() const{
	cout << "Name: " << Name << " " << Surname << endl;
	cout << "BirthDate:";
	BirthDate.Print();
	cout << endl;
	cout << "HireDate:";
	HireDate.Print();
	cout << endl;

}


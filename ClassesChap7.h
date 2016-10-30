#pragma once

class DateT
{
	friend void SetDag(DateT &, int);
public:
	DateT(int Day=1,int Month=1,int Year=1980);
	~DateT();
	void Set(int DD, int MM, int YYYY);
	void Print() const;
	DateT &SetDay(int a);
	DateT &SetMonth(int a);
	DateT &SetYear(int a);

private:
	int D, M, Y;
	int CheckDay(int TestDay);

};


class EmployeeT
{
public:
	EmployeeT(char *Navn="Navn",char *SurNavn="Navnenssen",int BD=1,int BM=1,int BY=1980,int HD=1,int HM=1,int HY=2000);
	~EmployeeT();
	void Set(char *Navn = "Navn", char *SurNavn = "Navnenssen", int BD = 1, int BM = 1, int BY = 1980, int HD = 1, int HM = 1, int HY = 2000);
	void Print() const;
	static int getCounter();
private:
	char *Name, *Surname;
	DateT BirthDate, HireDate;
	static int counter;

};

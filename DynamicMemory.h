#pragma once
#define _CRT_SECURE_NO_WARNING

class EmployeeShortT
{
public:
	EmployeeShortT(char *N = "Navn", char *S = "Ivanov");
	~EmployeeShortT();

	const char *getName();
	const char *getSurname();
	static int getCounter();

private:
	char *Name, *Surname;
	static int Counter;
};

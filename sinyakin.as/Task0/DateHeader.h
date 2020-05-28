#pragma once
#include <iostream>
#include <fstream>
#include <clocale>
#include <string>
#include <cstdlib>

using namespace std;


class Date
{

	int Day;
	int Month;
	int Year;
public:
	Date(); //�� ���������
	Date(int i, int j, int k); // �������������
	Date(const Date& s); //�����������
	Date(string s); //�������������� ���� int --> string
	~Date();


	// OPERATIONS

	Date& operator=(const Date& c);
	Date operator+(int j);
	Date operator-(int j);
	bool operator==(const Date& c);
	bool operator!=(const Date& c);
	bool operator>(const Date& c);
	bool operator<(const Date& c);
	friend ostream& operator<<(ostream& os, const Date& s);
	friend istream& operator>>(istream& is, Date& s);

};


#include "Header.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	CString str1; // ����������� �� ���������
	CString str2("������ ��������"); // ����������� �������������� ����
	CString str3 (10, '*'); // ����������� �������������
	CString str4 (15); // ����������� �������������
	CString str5 (str2); // ����������� �����������

	str1.OutPut("str1");
	str2.OutPut("str2");
	str3.OutPut("str3");
	str4.OutPut("str4");
	str5.OutPut("str5");


	str3 = str2;
	str3.OutPut("str3");
	str2 = " - ���������� �����";
	str2.OutPut("str2");
	str5 = str3 + str2;
	str5.OutPut("str5");
	str3 += str2;
	str3 = "������ ��������";
	str3.OutPut("str3");
	str3 += " - ��� ������� �����!";
	s3.outPut("s3");

	return 0;
}
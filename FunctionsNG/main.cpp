#include "stdafx.h"
#include "constans.h"
#include "FillRand.h"
#include "Print.h"
#include "Print.cpp"
#include "Sort.h"
#include "Sort.cpp"
#include "Statistics.h"
#include "Statistics.cpp"



void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	int minRand = 200, maxRand = 300;
	UniqueRand(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr, n) << endl;
	Sort(arr, n);
	Print(arr, n);

	const int SIZE = 8;
	double brr[SIZE];
	/*cout << "������� ����������� � ������������ ��������� �����: "; cin >> minRand >> maxRand;
	if (minRand >= maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}*/
	FillRand(brr, SIZE, minRand, maxRand);
	Print(brr, SIZE);
	cout << "����� ��������� �������: " << Sum(brr, SIZE) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(brr, SIZE) << endl;
	cout << "����������� �������� � �������: " << minValueIn(brr, SIZE) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(brr, SIZE) << endl;
	Sort(brr, SIZE);
	Print(brr, SIZE);

	int i_arr_2[ROWS][COLS];		//i_arr_2 int array 2D
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	double d_arr_2[ROWS][COLS] =
	{
		{2.5, 3.14, 4.2},
		{7.8, 5.1, 2.7},
		{1.1, 2.3, 4.7}
	};
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(d_arr_2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(d_arr_2, ROWS, COLS) << endl;
}





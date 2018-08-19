#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include<math.h>
#include <cstdlib>
#include<ctime>

using namespace std;

//20.	*Напишите функцию, которая определяет количество элементов передаваемого массива,
//которые больше определенного числа, это число тоже передается в функцию.
//Реализовать перегрузки для различных типов массивов.
int check_el(int a[], int size, int x)
{
	int count = 0;
	for (int i = 0; i < size; i++)
		if (a[i] > x)
			count++;
	return count;
}
int check_el(double a[], int size, int x)
{
	int count = 0;
	for (int i = 0; i < size; i++)
		if (a[i] > x)
			count++;
	return count;
}
//Proc1.Описать процедуру PowerA3(A, B), вычисляющую третью степень числа A и возвращающую ее в переменной B
//(A — входной, B — выходной параметр; оба параметра являются вещественными).
//С помощью этой процедуры найти третьи степени пяти данных чисел
void PowerA3(double a, double &b) {
	b = a*a*a;
}
//Proc2.Описать процедуру PowerA234(A, B, C, D), вычисляющую вторую, третью и четвертую степень числа A
//и возвращающую эти степени соответственно в переменных B, C и D(A — входной, B, C, D — выходные параметры;
//все параметры являются вещественными).С помощью этой процедурынайтивторую, третьюичетвертуюстепеньпятиданныхчисел.
void PowerA234(double a, double &b, double &c, double &d) {
	b = a*a;
	c = a * a*a;
	d = b * b;
}
//Proc3.Описать процедуру Mean(X, Y, AMean, GMean), вычисляющую среднее арифметическое AMean = (X + Y) / 2
//и среднее геометрическое GMean = √X·Y двух положительных чисел X и Y(X и Y — входные, AMeanиGMean—выходныепараметрывещественноготипа).
//Спомощью этой процедуры найти среднее арифметическое и среднее геометрическое для пар(A, B), (A, C), (A, D), если даны A, B, C, D.
void Mean(double X, double Y, double &AMean, double &GMean)
{
	if (X > 0 && Y > 0)
	{
		AMean = (X + Y) / 2;
		GMean = sqrt(X*Y);
	}
}
//Proc4◦.Описать процедуру TrianglePS(a, P, S), вычисляющую по стороне a равностороннего треугольника его периметр P = 3·a и площадь S = a2·√3 / 4
//(a — входной, P и S — выходные параметры; все параметры являются вещественными).
//С помощью этой процедуры найти периметры и площади трех равносторонних треугольников с данными сторонами
void TrianglePS(double a, double &P, double &S) {
	P = 3*a;
	S = a*2*sqrt(3) / 4;
}
//Proc6.Описать процедуру DigitCountSum(K, C, S), находящую количество C цифр целого положительного числа K,
//а также их сумму S(K — входной, C и S — выходные параметры целого типа).
//С помощью этой процедуры найти количество и сумму цифр для каждого из пяти данных целых чисел.
void DigitCountSum(int K, int &C, int &S) {
	int a;
	C = 0, S = 0;
	while (K != 0)
	{
		a = K % 10;
		C++;
		S += a;
		K /=10;
	}
}
//Proc7.Описать процедуру InvertDigits(K), меняющую порядок следования цифр целого положительного числа K на обратный(
//	K — параметр целого типа, являющийся одновременно входным и выходным).
//	С помощью этой процедуры поменять порядок следования цифр на обратный для каждого из пяти данных целых чисел.
void InvertDigits(int &K) {
	int count = 0;
	int a = 0;
	while (K != 0)
	{
		a = a*10 + K % 10;
		K /= 10;
	}
	K = a;
}
//Proc8◦.Описать процедуру AddRightDigit(D, K), добавляющую к целому положительному числу K справа цифру D
//	(D — входной параметр целого типа, лежащий в диапазоне 0–9, K — параметр целого типа, являющийся одновременно входным и выходным).
//С помощью этой процедуры последовательно добавить к данному числу K справа данные цифры D1 и D2, выводя результат каждого добавления.
void AddRightDigit(int D, int &K) {
	if (D >= 0 && D <= 9)
	{
		K = K * 10 + D;
	}
}
//Proc9.Описать процедуру AddLeftDigit(D, K), добавляющую к целому положительному числу K слева цифру D
//	(D — входной параметр целого типа, лежащий в диапазоне 1–9, K — параметр целого типа, являющийся одновременно входным и выходным).
//	С помощью этой процедуры последовательно добавить к данному числу K слева данные цифры D1 и D2, выводя результат каждого добавления.
void AddLeftDigit(int D, int &K) {
	int count = 0;
	int n = K;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	if (D >= 0 && D <= 9)
	{
		n = D * pow(10, count) + K;
	}
	K = n;
}

//Proc10.Описать процедуру Swap(X, Y), меняющую содержимое переменных X и Y(X и Y — вещественные параметры, являющиеся одновременно входными и выходными).
//	С ее помощью для данных переменных A, B, C, D последовательно поменять содержимое следующих пар :
//	A и B, C и D, B и C и вывести новые значения A, B, C, D.
void swap(int &x, int &y) {
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}
void swap(double &x, double &y) {
	double tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}
void swap(char &x, char &y) {
	char tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}
//Proc26.Описать функцию IsPower5(K) логического типа, возвращающую TRUE,
//если целый параметр K(>0) является степенью числа 5, и FALSE в противном случае.
//С ее помощью найти количество степеней числа 5 в наборе из 10 целых положительных чисел.
bool IsPower5(int K) {
	if (K > 0)
	{
		while (K > 1)
		{
			if (K % 5 != 0) return 0; // чтобы в конце не проверять равно ли К одному
			K = K / 5;
		}
		return true;
		/*if (K == 1) return true;
		else false;*/
	}
}
//24.	**Написать функцию, которая меняет порядок элементов передаваемого массива на обратный.
//Внутри функции запрещено использовать вспомогательный массив.
//Реализовать перегрузки для различных типов массивов.

void reverse(int a[], int size)
{
	for (int i = 0; i < size / 2; i++)
		swap(a[i], a[size - i - 1]);
}
void reverse(double a[], int size)
{
	for (int i = 0; i < size / 2; i++)
		swap(a[i], a[size - i - 1]);
}
void reverse(char a[], int size)
{
	for (int i = 0; i < size / 2; i++)
		swap(a[i], a[size - i - 1]);
}
//25.	**Написать функцию, которая принимает три числа и показывает на экран все числа от 0 до 1000,
//которые одновременно кратны всем трем параметрам.Проиллюстрировать работу этой функции.
void delitel(int x, int y, int z)
{
	for (int i = 1; i <= 1000; i++)
	{
		if (i%x == 0 && i%y == 0 && i%z == 0)
			cout << i << endl;
	}
}
//26.	Напишите функцию, которая принимает выражение в виде строки и проверяет, правильно ли расставлены в нем скобки.
//А) *Скобки могут быть только круглые «(» «)».
//Б) **Скобки могут быть круглые «(» «)» и квадратные «[» и «]»

bool skobki(char str[]){
	
	int c = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (c < 0) return false;
		if (str[i] == '(')
			c++;
		if (str[i] == ')')
			c--;
	}
	if (c!=0) return false;
	return true;
}
bool skobki2(char str[]) {

	int c = 0;
	int k = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (c < 0) return false;
		if (str[i] == '(')
			c++;
		if (str[i] == ')')
			c--;
		if (k < 0) return false;
		if (str[i] == '[')
			k++;
		if (str[i] == ']')
			k--;
	}
	if (c != 0 || k!=0) return false;
	return true;
}


int main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	int tn = 0;

	while (true)
	{
		cout << "Задача № ";
		cin >> tn;

		switch (tn)
		{
		case 1:
		{
			double a[] = { 2, 4, 0, 7, 4, 2 };
			double b[] = { 1.5, 0, 2.4, 1.3, 0, 1 };
			double x = 3.7;
			cout << check_el(a, 6, x) << endl;
		}
		break;
		case 2:
		{
			double x, y=0;
			cin >> x;
			PowerA3(x, y);

			cout << y << endl << endl;
		}
		break;
		case 3:
		{
			double x, b = 0, c=0, d=0;
			cin >> x;
			PowerA234(x, b, c, d);

			cout << b << endl;
			cout << c << endl;
			cout << d << endl << endl;
		}
		break;
		case 4:
		{
			double x=0, y=0;
			double a, b, c, d;
			cin >> a >> b >> c >> d;

			Mean(a, b, x, y);
			cout << x << " | " << y << endl;
			Mean(a, c, x, y);
			cout << x << " | " << y << endl;
			Mean(a, d, x, y);
			cout << x << " | " << y << endl << endl;
		}
		break;
		case 5:
		{
			double a;
			cin >> a;
			double P = 0, S = 0;

			TrianglePS(a, P, S);
			cout << "P= " << P << endl << "S= " << S << endl;

			double b;
			cin >> b;
			TrianglePS(b, P, S);
			cout << "P= " << P << endl << "S= " << S << endl;

			double c;
			cin >> c;
			TrianglePS(c, P, S);
			cout << "P= " << P << endl << "S= " << S << endl;
		}
		break;
		case 6:
		{
			int K;
			cin >> K;
			int C=0, S=0;

			DigitCountSum(K, C, S);
			cout << C << endl << S << endl;
		}
		break;
		case 7:
		{
			int K;
			cin >> K;
			InvertDigits(K);

			cout << K << endl << endl;

		}
		break;
		case 8:
		{
			int K;
			int D1, D2;
			cin >> K;
			cin >> D1 >> D2;

			AddRightDigit(D1, K);
			cout << K << endl;
			AddRightDigit(D2, K);
			cout << K << endl << endl;
		}
		break;
		case 9:
		{
			int K;
			int D1, D2;
			cin >> K;
			cin >> D1 >> D2;

			AddLeftDigit(D1, K);
			cout << K << endl;
			AddLeftDigit(D2, K);
			cout << K << endl << endl;
		}
		break;
		case 10:
		{
			int a=1, b=2, c=3, d=4;
			swap(a, b);
			swap(c, d);
			swap(b, c);

			cout << a << endl;
			cout << b << endl;
			cout << c << endl;
			cout << d << endl << endl;
		}
		break;
		case 11:
		{
			int x;
			cin >> x;

			cout << IsPower5(x) << endl;
		}
		break;
		case 12:
		{
			int a[6] = { 1, 2, 3, 4, 5, 6 };
			double b[3] = { 1.5, 2.5, 3.5 };
			char c[4] = { 'A', 'B', 'C', 'D' };

			reverse(a, 6);
			reverse(b, 3);
			reverse(c, 4);

			for (int i = 0; i < 6; i++)
			{
				cout << a[i] << " ";
			}
			cout << endl;

			for (int i = 0; i < 3; i++)
			{
				cout << b[i] << " ";
			}
			cout << endl;

			for (int i = 0; i < 4; i++)
			{
				cout << c[i] << " ";
			}
			cout << endl;
		}
		break;
		case 13:
		{
			int x = 3, y = 4, z = 5;

			delitel(x, y, z);
		}
		break;
		case 14:// теория
		{
			char str[10]; //10 элементов = 9 видимых символов,
			// т.к. последняя ячейка уходит на спец разделитель, означающий конец строки
			// если ввести больше символов, они отобразятся, но потом выведется ошибка
			cin >> str; // в случае со строками компилятор понимает ввод массива символов как одно целое, можно без цикла
						// при считывании если появляется пробел, то после него уже в чаровский массив ничего не заносится, а игнорируется. 
						
			cout << str << endl;
			cout << str[0] << endl;

			cout << strlen(str) << endl;
		}
		break;
		case 15: // skobki
		{
			char str[10];
			cin >> str;

			cout << skobki(str) << endl;

		}
		break;
		case 16:
		{
			char str[10];
			cin >> str;

			cout << skobki2(str) << endl;
		}
		break;
		default:
			cout << "нет такой задачи" << endl << endl;
		}
	}
	system("pause");
	return 0;
}
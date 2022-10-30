// Lab_03_2.cpp
// Горбатий Ігор
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 0.1
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double a; // вхідний параметр
	double b; // вхідний параметр
	double c; // вхідний параметр
	double F; // результат обчислення виразу
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	// спосіб 1: розгалуження в скороченій формі
	if (c < 0 && x != 0)
		F = (-1) * a * x - c;
	if (c > 0 && x == 0)
		F = (x - a) / (-c);
	if (!(c < 0 && x != 0) && !(c > 0 && x == 0))
		F = (b * x) / (c - a);
	cout << endl;
	cout << "1) F = " << F << endl;
	// спосіб 2: розгалуження в повній формі
	if (c < 0 && x != 0)
		F = (-1) * a * x - c;
	else
		F = (b * x) / (c - a);
	cout << "2) F = " << F << endl;
	cin.get();
	return 0;
}
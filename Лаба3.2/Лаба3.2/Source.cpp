// Lab_03_2.cpp
// �������� ����
// ����������� ������ � 3.2
// ������������, ������ ��������: ������� � �����������.
// ������ 0.1
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double a; // ������� ��������
	double b; // ������� ��������
	double c; // ������� ��������
	double F; // ��������� ���������� ������
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	// ����� 1: ������������ � ��������� ����
	if (c < 0 && x != 0)
		F = (-1) * a * x - c;
	if (c > 0 && x == 0)
		F = (x - a) / (-c);
	if (!(c < 0 && x != 0) && !(c > 0 && x == 0))
		F = (b * x) / (c - a);
	cout << endl;
	cout << "1) F = " << F << endl;
	// ����� 2: ������������ � ����� ����
	if (c < 0 && x != 0)
		F = (-1) * a * x - c;
	else
		F = (b * x) / (c - a);
	cout << "2) F = " << F << endl;
	cin.get();
	return 0;
}
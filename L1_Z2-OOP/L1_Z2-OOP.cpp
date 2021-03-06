//
//  main.cpp
//  L1_Z1
//
//  Created by Александр Грачев (ИКБО-10-18) on 15/02/2019.
//  Copyright © 2019 Александр Грачев. All rights reserved.
// ТЕМА 2. ОРГАНИЗАЦИЯ СТАНДАРТНОГО ВВОДА И ВЫВОДА
//  ЯЗЫКА С++
//

#include "pch.h"
#include <iostream>
#include "locale.h"
#include "stdlib.h"
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	//Задание 1. ВЫВОД.
	cout << "Организация потокового вывода\n";

	//Задание 2. ВВОД.
	int x;
	cout << "Введите целое х\n";
	cin >> x;
	cout << "x = " << x << endl;
	int y, z;
	cout << "Input 3 int's\n";
	cin >> x >> y >> z;
	cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
	double a, b, c;
	cout << "Введите три дробных\n";
	cin >> a >> b >> c;
	cout << "a=" << a << ", b=" << b << ", c=" << c << endl;
	cout<< "Введите целое число в переменную целого типа,\nвещественное число в переменную вещественного типа,\nцелое число в переменную вещественного типа через пробел"<<endl;
	cin >> x >> b >> c;
	cout << "x=" << x << ", b=" << b << ", c=" << c << endl;

	//Задание 3. Вывод значений выражений.
	cout << endl << "Значение х=" << x << endl;
	cout << "x=" << x << ", y=" << y << ", c=" << c << endl;
	cout << "x+y*c=" << x + y * c << endl;

	//Задание 4. Манипуляторы.
	cout << endl << "В 10 с.с. " << 27 << endl;
	cout << "B 8 c.c. " << oct << 27 << endl;
	cout << "B 16 c.c. " << hex << 27 << endl;
	cout << fixed << setprecision(3) << (13.5 / 2) << endl;
	cout << dec<<endl;

	//Задание 5. Методы cout.
	cout.width(10);
	cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
	cout << fixed;
	cout.precision(4);
	cout.width(10);
	cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

	system("PAUSE");
	return 0;
}
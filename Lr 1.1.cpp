

#include "pch.h"
#include <iostream>


const int N = 10;
const int a = 3, b = 3;

void func1() {

	int mas[N];
	cout << "введите массив: " << endl; // заполнение массива
	for (int i = 0; i < N; i++)
		cin >> mas[i];

	for (int i = 0; i < N; i++) // преобразование массива, т.е. замена четных чисел на "0"
	{
		if (mas[i] % 2 == 0)
			mas[i] = 0;
	}
	cout << "преобразованный массив: "; //вывод преобразованного массива
	for (int i = 0; i < N; i++)
		cout << mas[i] << " ";
	cout << endl;

}
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Задание 1:" << endl;
	func1();
}


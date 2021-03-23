#include <iostream>
#include <clocale>

using namespace std;

setlocale(LC_ALL, "Russian");

//Задание 1.

int main()
{
	int a, num1, num2;

	cout << "Fist" << endl;

	cin >> num1;

	cout << "Second" << endl;

	cin >> num2;

	a = num1 + num2;

	cout << "Summa: " << a << endl;

	if (a >= 10 && a <= 20)
	{
		cout << "a = [10;20]";
	}

	else
	{
		cout << "a != [10;20]";
	}

	return 0;
}

//Задание 2.

int main1()
{

	int b, a, c;

	cout << "Введите переменную а: ";

	cin >> b;

	cout << "Введите переменную b: ";

	cin >> a;

	c = a + b;

	if (a == 10, b == 10)
	{
		cout << "true";
	}
	else
	{
		switch (c)
		{
		case 10:
			cout << "true";
			break;

		default:
			cout << "false";
		}
	}


	return 0;
}

//Задание 3.

int main2()
{
	for (int i = 1; i <= 50; i = i + 2)
	{
		cout << i << " ";
	}

	return 0;
}

//Задание 4.

int main3()
{

	int n, i;

	bool itPrime = true;

	cout << "Введите цифру: ";

	cin >> n;

	cout << n << endl;

	for (i = 2; i <= (sqrt(abs(n))); i++)
	{
		if (n % i == 0)
		{
			itPrime = false;
			break;
		}
	}

	if (itPrime)
	{
		cout << "Это простое число!" << endl;
	}
	else
	{
		cout << "Это не простое число!" << endl;
	}

	return 0;
}

//Задание 5.

int main()
{

	int year;

	cout << "Введите год: ";

	cin >> year;

	if (year > 3000 || year < 1)
	{
		cout << "Error" << endl;
	}
	else
	{
		if (year % 4 == 0)
		{
			if (year % 100 == 0)
			{
				if (year % 400 == 0)
				{
					cout << "Это високосный год!";
				}
				else
				{
					cout << "Это невисокосный год!";
				}
			}
			else
			{
				cout << "Это високосный год!";
			}

		}
		else
		{
			cout << "Это невисокосный год!";
		}
	}

	return 0;
}

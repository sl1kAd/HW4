#include <iostream>
#include <clocale>

using namespace std;

//������� 1.

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

//������� 2.

int main1()
{
	setlocale(LC_ALL, "Russian");

	int b, a, c;

	cout << "������� ���������� �: ";

	cin >> b;

	cout << "������� ���������� b: ";

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

//������� 3.

int main2()
{
	for (int i = 1; i <= 50; i = i + 2)
	{
		cout << i << " ";
	}

	return 0;
}

//������� 4.

int main3()
{
	setlocale(LC_ALL, "Russian");

	int n, i;

	bool itPrime = true;

	cout << "������� �����: ";

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
		cout << "��� ������� �����!" << endl;
	}
	else
	{
		cout << "��� �� ������� �����!" << endl;
	}

	return 0;
}

//������� 5.

int main()
{
	setlocale(LC_ALL, "Russian");

	int year;

	cout << "������� ���: ";

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
					cout << "��� ���������� ���!";
				}
				else
				{
					cout << "��� ������������ ���!";
				}
			}
			else
			{
				cout << "��� ���������� ���!";
			}

		}
		else
		{
			cout << "��� ������������ ���!";
		}
	}

	return 0;
}
